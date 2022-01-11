
#include <fstream>
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

char infix[100], postfixata[100], derivata1[200], derivata2[200];

struct nod
{
    char info;
    nod *urm;
};

struct arbore
{
    char info[10];
    arbore *st, *dr;
};

struct nodarbore
{
    arbore *info;
    nodarbore *urm;
};

struct stiva
{
    nod *varf;
    int nrElemente;
};

struct stivaarbore
{
    nodarbore *varf;
    int nrElemente;
};

struct coada
{
    nod *prim;
    nod *ultim;
    int nrElemente;
};

coada postfix;

bool esteVida(stiva S)
{
    return S.nrElemente == 0;
}

bool esteVida(stivaarbore S)
{
    return S.nrElemente == 0;
}

// scoate elementul din varful stivei
void pop(stiva &S)
{
    if (!esteVida(S))
    {

        nod *varf_nou;
        varf_nou = S.varf->urm;
        delete S.varf;
        S.varf = varf_nou;
        S.nrElemente--;
    }
}

// scoate elementul din varful stivei de arbori
void poparbore(stivaarbore &S)
{
    if (!esteVida(S))
    {
        nodarbore *varf_nou;
        varf_nou = S.varf->urm;
        delete S.varf;
        S.varf = varf_nou;
        S.nrElemente--;
    }
}

// adauga un element la stiva, in varf (LIFO)
void push(stiva &S, char element)
{
    nod *nod_nou;

    if (esteVida(S))
    {
        S.nrElemente = 1;
        S.varf = new nod;
        S.varf->info = element;
        S.varf->urm = NULL;
    }
    else
    {
        S.nrElemente++;
        nod_nou = new nod;
        nod_nou->info = element;
        nod_nou->urm = S.varf;
        S.varf = nod_nou;
    }
}

// adauga un element la stiva de arbori, in varf (LIFO)
void pusharbore(stivaarbore &S, arbore *element)
{
    nodarbore *nod_nou;

    if (esteVida(S))
    {
        S.nrElemente = 1;
        S.varf = new nodarbore;
        S.varf->info = element;
        S.varf->urm = NULL;
    }
    else
    {
        S.nrElemente++;
        nod_nou = new nodarbore;
        nod_nou->info = element;
        nod_nou->urm = S.varf;
        S.varf = nod_nou;
    }
}

void initializeazastiva(stiva &S)
{
    S.varf = NULL;
    S.nrElemente = 0;
}

void initializeazastivaarbore(stivaarbore &S)
{
    S.varf = NULL;
    S.nrElemente = 0;
}

void initializeazacoada(coada &C)
{
    C.prim = NULL;
    C.ultim = NULL;
    C.nrElemente = 0;
}

bool esteVida(coada C)
{
    return C.nrElemente == 0;
}

// scoate primul element din coada, din capul cozii
char dequeue(coada &C)
{
    char element = C.prim->info;
    nod *primul;
    primul = C.prim;
    C.prim = C.prim->urm;
    delete primul;
    C.nrElemente--;
    return element;
}

// adauga un element la coada, dupa ultimul element (FIFO)
void enqueue(coada &C, char element)
{
    nod *nod_nou;

    if (esteVida(C))
    {
        C.nrElemente = 1;
        C.prim = new nod;
        C.prim->info = element;
        C.prim->urm = NULL;
        C.ultim = C.prim;
    }
    else
    {
        C.nrElemente++;
        nod_nou = new nod;
        nod_nou->info = element;
        nod_nou->urm = NULL;
        C.ultim->urm = nod_nou;
        C.ultim = nod_nou;
    }
}

void afiseaza(coada C)
{
    nod *nod_curent;
    nod_curent = C.prim;
    int i = 0;

    while (nod_curent != NULL)
    {
        cout << nod_curent->info;
        postfixata[i++] = nod_curent->info;
        nod_curent = nod_curent->urm;
    }
}

//prioritatea operatorilor
int prioritate(char c)
{
    switch (c)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    case '(':
        return 4;
    case ')':
        return 5;
    default:
        return 6;
    }
}

//prioritatea operatorilor (sir de caractere)
int prioritate1(char c[])
{
    if (!strcmp(c, "+"))
        return 1;
    if (!strcmp(c, "-"))
        return 2;
    if (!strcmp(c, "*"))
        return 3;
    if (!strcmp(c, "^"))
        return 4;
    if (!strcmp(c, "/"))
        return 5;
    else
        return 6;
}

void adaugaincoada(coada &postfix, stiva &S)
{
    enqueue(postfix, S.varf->info);
    pop(S);
}

//adaugam in stiva operatorii
void adaugainstiva(stiva &S, coada &postfix, char &x, int &i)
{
    push(S, x); //altfel, este semn
}

bool esteoperator(char infix[], int i)
{ // construirea notatie postfixate

    if (strchr("+-*/^(),", infix[i]))
        return 1;
    return 0;
}

int esteoperator1(char element[])
{ // construirea arborelui derivatei

    if (strchr("+-*/^", element[0]) && element[1] == NULL)
        return 2;
    return 0;
}

void convInfix2Postfix(char infix[], coada &postfix)
{

    int i, lg = strlen(infix), j = 0;
    char x;
    stiva S;
    initializeazastiva(S);

    // verificam daca primul numar este negativ
    if (infix[j] == '-')
    {
        enqueue(postfix, '-');
        j = j + 1;
    }

    // parcurgem expresia
    for (i = j; i < lg; i++)
    {
        x = infix[i];
        if (!esteoperator(infix, i)) // verificam daca x este operand (ex: a,b,c,d,1,2,3)
            enqueue(postfix, x);
        else
        { // exista operator(ex: +,-,*,/,^,sin,log)

            if (x != '(' && infix[i - 1] != ')' && !strchr("sctglrez", x))
                enqueue(postfix, ',');

            if (x == '(' && infix[i + 1] == '-')
            { //verificam daca numarul este negativ
                enqueue(postfix, '-');
                i++;
            }

            if (x == ')')
            {
                /* daca elementul este o paranteza dreapta, extragem operatorii din
                                                              stiva si ii adaugam la forma postfixata pana cand varful stivei
                                                              ajunge la o paranteza stanga (care este extrasa, dar nu este adaugata
                                                              la forma postfixata)*/
                while (S.varf->info != '(')
                {
                    adaugaincoada(postfix, S);
                    enqueue(postfix, ',');
                }

                pop(S);
            }
            else if (x != ',')
            {
                /* cat timp exista un alt operator O2 în varful stivei si prioritatea
                sa este mai mare sau egala decat cea a operatorului curent O1,
                adauga O2 la notatia postfixata si extrage O2 din stiva*/
                while (!esteVida(S) && (S.varf->info != '(') && (prioritate(S.varf->info) >= prioritate(x)))
                {
                    adaugaincoada(postfix, S);
                    enqueue(postfix, ',');
                }
                adaugainstiva(S, postfix, x, i); //adauga O1 in stiva
            }
        }
    }
    if (!esteoperator(infix, i - 1))
        enqueue(postfix, ',');

    while (S.nrElemente > 1)
    { //extragem toate elementele ramase in stiva si le adaugam la forma postfixata
        adaugaincoada(postfix, S);
        enqueue(postfix, ',');
    }

    adaugaincoada(postfix, S);
}

//adaugam notatia postfixata in stiva de arbori
void buildAST(coada C, stivaarbore &S)
{
    int i = 0;
    arbore *arbore_nou;
    char element[10];
    memset(element, '\0', 10); // reinitializare sir de caractere

    while (C.prim != NULL)
    {
        if (C.prim->info == ',')
        {
            if (!(esteoperator1(element)))
            { // este operand
                arbore_nou = new arbore;
                strcpy(arbore_nou->info, element);
                arbore_nou->st = NULL;
                arbore_nou->dr = NULL;
                pusharbore(S, arbore_nou);
            }
            else if (esteoperator1(element) == 2)
            { // este semn (+,-,*,/,^) sau functie binara (log, rad, e)
                arbore_nou = new arbore;
                strcpy(arbore_nou->info, element);
                arbore_nou->dr = S.varf->info;
                poparbore(S);
                arbore_nou->st = S.varf->info;
                poparbore(S);
                pusharbore(S, arbore_nou);
            }
            memset(element, '\0', strlen(element));
            i = 0;
        }
        else
            element[i++] = C.prim->info;
        C.prim = C.prim->urm;
    }

    if (esteoperator1(element) == 2)
    {
        arbore_nou = new arbore;
        strcpy(arbore_nou->info, element);
        arbore_nou->dr = S.varf->info;
        poparbore(S);
        arbore_nou->st = S.varf->info;
        poparbore(S);
        pusharbore(S, arbore_nou);
    }
}