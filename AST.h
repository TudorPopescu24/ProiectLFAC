
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
    case 's':
    case 'c':
    case 't':
    case 'g':
    case 'l':
    case 'r':
    case 'e':
    case 'z':
        return 4;
    case '(':
        return 5;
    case ')':
        return 6;
    default:
        return 7;
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
    //verificam daca este functie
    if (S.varf->info == 's')
    {
        enqueue(postfix, 's');
        enqueue(postfix, 'i');
        enqueue(postfix, 'n');
    }
    else if (S.varf->info == 'c')
    {
        enqueue(postfix, 'c');
        enqueue(postfix, 'o');
        enqueue(postfix, 's');
    }
    else if (S.varf->info == 't')
    {
        enqueue(postfix, 't');
        enqueue(postfix, 'g');
    }
    else if (S.varf->info == 'g')
    {
        enqueue(postfix, 'c');
        enqueue(postfix, 't');
        enqueue(postfix, 'g');
    }
    else if (S.varf->info == 'l')
    {
        enqueue(postfix, 'l');
        enqueue(postfix, 'o');
        enqueue(postfix, 'g');
    }
    else if (S.varf->info == 'r')
    {
        enqueue(postfix, 'r');
        enqueue(postfix, 'a');
        enqueue(postfix, 'd');
    }
    else if (S.varf->info == 'e')
    {
        enqueue(postfix, 'l');
        enqueue(postfix, 'n');
    }
    else if (S.varf->info == 'z')
    {
        enqueue(postfix, 'l');
        enqueue(postfix, 'g');
    }
    else
        enqueue(postfix, S.varf->info);

    pop(S);
}

//adaugam in stiva operatorii
void adaugainstiva(stiva &S, coada &postfix, char &x, int &i)
{

    //verificam daca este functie
    if (x == 's' && infix[i + 1] == 'i' && infix[i + 2] == 'n')
    {
        push(S, 's');
        i = i + 2;
    }
    else if (x == 'c' && infix[i + 1] == 'o' && infix[i + 2] == 's')
    {
        push(S, 'c');
        i = i + 2;
    }
    else if (x == 't' && infix[i + 1] == 'g')
    {
        push(S, 't');
        i = i + 1;
    }
    else if (x == 'c' && infix[i + 1] == 't' && infix[i + 2] == 'g')
    {
        push(S, 'g');
        i = i + 2;
    }
    else if (x == 'l' && infix[i + 1] == 'o' && infix[i + 2] == 'g')
    {
        push(S, 'l');
        i = i + 2;
    }
    else if (x == 'r' && infix[i + 1] == 'a' && infix[i + 2] == 'd')
    {
        push(S, 'r');
        i = i + 2;
    }
    else if (x == 'l' && infix[i + 1] == 'n')
    {
        push(S, 'e');
        i = i + 1;
    }
    else if (x == 'l' && infix[i + 1] == 'g')
    {
        push(S, 'z');
        i = i + 1;
    }
    else
        push(S, x); //altfel, este semn
}

bool esteoperator(char infix[], int i)
{ // construirea notatie postfixate

    if (strchr("+-*/^(),", infix[i]))
        return 1;
    if (strchr("sctglr", infix[i]) && strchr("iogtan", infix[i + 1]))
        return 1;
    return 0;
}

int esteoperator1(char element[])
{ // construirea arborelui derivatei

    if (strchr("+-*/^", element[0]) && element[1] == NULL)
        return 2;
    if ((element[0] == 'l') && (element[1] == 'o') && (element[2] == 'g'))
        return 2;
    if ((element[0] == 'r') && (element[1] == 'a') && (element[2] == 'd'))
        return 2;
    if (strchr("sctgl", element[0]) && strchr("iogtn", element[1]) && element[1] != NULL)
        return 1;
    return 0;
}

int esteoperator2(char element[])
{ //parcurgerea arborelui

    if (strchr("+-*/^", element[0]) && element[1] == NULL)
        return 2;
    if ((element[0] == 'l') && (element[1] == 'o') && (element[2] == 'g'))
        return 1;
    if ((element[0] == 'r') && (element[1] == 'a') && (element[2] == 'd'))
        return 1;
    if (strchr("sctgl", element[0]) && strchr("iogtn", element[1]) && element[1] != NULL)
        return 1;
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
void adaugaLaArboreElement(coada C, stivaarbore &S)
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
            else
            { // este functie unara (sin, cos, tg, ctg, ln, lg)
                arbore_nou = new arbore;
                strcpy(arbore_nou->info, element);
                arbore_nou->dr = NULL;
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
    else
    {
        arbore_nou = new arbore;
        strcpy(arbore_nou->info, element);
        arbore_nou->dr = NULL;
        arbore_nou->st = S.varf->info;
        poparbore(S);
        pusharbore(S, arbore_nou);
    }
}

int creareArbore(arbore *a)
{

    if (a != NULL)
    {
        if (strstr(a->info, "+"))
        {
            return creareArbore(a->st) + creareArbore(a->dr);
        }
        if (strstr(a->info, "-"))
        {
            return creareArbore(a->st) - creareArbore(a->dr);
        }
        if (strstr(a->info, "*"))
        {
            return creareArbore(a->st) * creareArbore(a->dr);
        }
        if (strstr(a->info, "/"))
        {
            return creareArbore(a->st) / creareArbore(a->dr);
        }
        return atoi(a->info);
    }
}