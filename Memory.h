#include "Scope.h"
#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <fstream>
#include "AST.h"

class Memory
{
public:
    std::vector<Scope *> stack;                             // stiva de scope-uri
    std::set<std::string> classes;                          // setul de clase (dupa nume)
    std::map<std::string, std::set<std::string>> functions; // setul de functii (dupa nume + tip)

    void declare(char *type, char *name)
    { //Declara variabila in ultimul Scope din stiva memoriei
        Scope *scope = stack.back();
        scope->declare_variable(type, name);
    }

    void assign(char *name, Data *data)
    { //Cauta variabila dupa nume in stiva de Scope-uri
        for (int i = stack.size() - 1; i >= 0; i--)
        {
            Scope *scope = stack[i];
            if (scope->exists_variable(name))
            {
                scope->assign_variable(name, data);
                break;
            }
        }
    }

    bool exists(char *name)
    { //Verifica existenta variabilei in stiva de Scope-uri
        for (int i = stack.size() - 1; i >= 0; i--)
        {
            Scope *scope = stack[i];
            if (scope->exists_variable(name))
            {
                return true;
            }
        }
        return false;
    }

    Data *get(char *name)
    { // Returneaza variabila 'name' din stiva de Scope-uri
        for (int i = stack.size() - 1; i >= 0; i--)
        {
            Scope *scope = stack[i];
            if (scope->exists_variable(name))
            {
                return scope->get(name);
            }
        }
        std::cout << "Variabila " << name << " nu a fost declarata. \n";
        return new Data("0");
    }

    void push_scope()
    {
        Scope *scope = new Scope();
        stack.push_back(scope);
    }

    void pop_scope()
    {
        stack.pop_back();
    }

    void define_class(char *name)
    { // Declaram clasa, apoi o adaugam set-ului
        classes.insert(std::string(name));
    }

    bool exists_class(char *name)
    { // Verificam daca clasa a fost declarata
        if (classes.find(std::string(name)) == classes.end())
        {
            return false;
        }
        return true;
    }

    void define_function(char *type, char *name)
    {
        functions[std::string(name)].insert(std::string(type));
    }

    bool exists_function(char *type, char *name)
    {
        if (functions.count(std::string(name)) != 0)
        {
            if (functions[std::string(name)].find(std::string(type)) != functions[std::string(name)].end())
            {
                return true;
            }
        }
        return false;
    }

    bool exists_function_byName(char *name)
    {
        if (functions.count(std::string(name)) != 0)
        {
            return true;
        }
        return false;
    }

    void print(Data *string_parameter, char *name)
    {
        Data *info;
        for (int i = stack.size() - 1; i >= 0; i--)
        {
            Scope *scope = stack[i];
            if (scope->exists_variable(name))
            {
                info = scope->get(name);
                break;
            }
        }
        std::cout << string_parameter->string_value << '\n';

        if (strcmp(info->type, "int") == 0)
        {
            std::cout << info->int_value << '\n';
        }

        if (strcmp(info->type, "float") == 0)
        {
            std::cout << info->float_value << '\n';
        }

        if (strcmp(info->type, "string") == 0)
        {
            std::cout << info->string_value << '\n';
        }

        if (strcmp(info->type, "char") == 0)
        {
            std::cout << info->char_value << '\n';
        }

        if (strcmp(info->type, "bool") == 0)
        {
            std::cout << info->bool_value << '\n';
        }
    }

    void table_print()
    { // afiseaza in fisierul symbol_table.txt
        std::ofstream myfile;
        myfile.open("symbol_table.txt");
        myfile.close();
        for (int i = stack.size() - 1; i >= 0; i--)
        {
            Scope *scope = stack[i];
            scope->tableprint();
        }
    }

    void table_print_functions()
    { // afiseaza in fisierul symbol_table_functions.txt
        std::ofstream myfile;
        myfile.open("symbol_table_functions.txt");
        for (auto i : functions)
        {
            std::set<std::string>::iterator it = i.second.begin();
            while (it != i.second.end())
            {
                myfile << "function " << (*it) << ' ' << i.first << "()" << '\n';
                it++;
            }
        }
        myfile.close();
    }

    void AST(char* expression)
    {
        strcpy(infix, expression + 1);
        infix[strlen(infix)-1] = '\0';
        cout << infix << '\n';
        initializeazacoada(postfix);
        convInfix2Postfix(infix, postfix);
        cout << "Notatia postfixata a expresiei " << infix << " este: ";
        afiseaza(postfix);
        cout << endl;
        stivaarbore S;
        initializeazastivaarbore(S);
        buildAST(postfix, S);
        cout << "Rezultatul expresiei " << infix << " este: ";
        int rezultat = evalAST(S.varf->info);
        cout << rezultat << endl;
    }

    int evalAST(arbore *a)
    {
        if (a != NULL)
        {
            if (strstr(a->info, "+"))
            {
                return evalAST(a->st) + evalAST(a->dr);
            }
            if (strstr(a->info, "-"))
            {
                return evalAST(a->st) - evalAST(a->dr);
            }
            if (strstr(a->info, "*"))
            {
                return evalAST(a->st) * evalAST(a->dr);
            }
            if (strstr(a->info, "/"))
            {
                return evalAST(a->st) / evalAST(a->dr);
            }
            else if (strchr("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", a->info[0]))
            {
                Data* variable;
                for (int i = stack.size() - 1; i >= 0; i--)
                {
                    Scope *scope = stack[i];
                    if (scope->exists_variable(a->info))
                    {
                        variable = scope->get(a->info);
                        break;
                    }
                }
                return variable->int_value;
            }
            return atoi(a->info);
        }
    }
};