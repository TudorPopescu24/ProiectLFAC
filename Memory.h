#include "Scope.h"
#include <iostream>
#include <vector>
#include <set>
#include <string>

class Memory {
public:

    std::vector<Scope *> stack;

    void declare(char *type, char *name) { //Declara variabila in ultimul Scope din stiva memoriei
        Scope *scope = stack.back();
        scope->declare_variable(type, name);
    }

    void assign(char *name, Data *data) { //Cauta variabila dupa nume in stiva de Scope-uri
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

    bool exists(char *name) { //Verifica existenta variabilei in stiva de Scope-uri
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

    Data *get(char *name) { // Returneaza variabila 'name' din stiva de Scope-uri
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

    void push_scope() {
        Scope *scope = new Scope();
        stack.push_back(scope);
    }

    void pop_scope() {
        stack.pop_back();
    }

    void print(Data *string_parameter, char *name) {
        Data *info;
        for (int i = stack.size() - 1; i >= 0; i--) {
            Scope *scope = stack[i];
            if (scope->exists_variable(name))
            {
                info = scope->get(name);
                break;
            }
        }
        std::cout << string_parameter->string_value << '\n';

        if (strcmp(info->type, "int") == 0){
            std::cout << info->int_value << '\n';
        }

        if (strcmp(info->type, "float") == 0){
            std::cout << info->float_value << '\n';
        }

        if (strcmp(info->type, "string") == 0){
            std::cout << info->string_value << '\n';
        }

        if (strcmp(info->type, "char") == 0){
            std::cout << info->char_value << '\n';
        }

        if (strcmp(info->type, "bool") == 0){
            std::cout << info->bool_value << '\n';
        }

    }
};