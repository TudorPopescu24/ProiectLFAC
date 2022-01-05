#include <iostream>
#include "Data.h"
#include <string>
#include <map>
#include <cstring>

class Scope {
public:
    std::map<std::string, Data *> scope_memory; //fiecare element din map contine ID-ul variabilei si Data(tip si valoare)
    void declare_variable(char *type, char *name) {
        Data *data;
        if (strcmp(type, "int") == 0) { //pt fiecare tip se creeaza un nou obiect de tip Data 
            data = new Data(0);
        }

        if (strcmp(type, "float") == 0){
            data = new Data(0.0f);
        }

        if (strcmp(type, "string") == 0){
            data = new Data("");
        }

        if (strcmp(type, "char") == 0){
            data = new Data((char)0);
        }

        if (strcmp(type, "bool") == 0){
            data = new Data(false);
        }


        if (exists_variable(name)){
            std::cout << "Variabila " << name << " a fost deja declarata anterior.\n";
        }

        else{
            scope_memory[std::string(name)] = data; //ID-ului i se asigneaza tipul si valoarea
        }
    } 

    void assign_variable(char *name, Data *data) {
        if (strcmp(scope_memory[name]->type, data->type) == 0) { //Verifica daca tipul variabilei se potriveste cu tipul valorii introduse
            scope_memory[name] = data;
        } else {
            std::cout << "Eroare la asignare: " << scope_memory[name]->type << " si " << data->type << " tipuri diferite!\n";
        }

    }

    bool exists_variable(char *name) {
        if (scope_memory.find(std::string(name)) != scope_memory.end()) { //Verifaca daca exista variabila in memoria din Scope
            return true;
        }
        return false;
    }

    Data *get(char *name) {
        return scope_memory[std::string(name)];
    } 
};
