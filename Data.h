#include <iostream>
#include <cstring>
#include <string.h>

class Data { //Stocheaza tipul si valoarea variabilei
public:

    char type[10];
    int int_value;
    float float_value;
    char *string_value;
    char char_value;
    bool bool_value;

    Data(int x) {
        int_value = x;
        strcpy(type, "int");
    }

    Data(float x) {
        float_value = x;
        strcpy(type, "float");
    }

    Data(char *x) {
        string_value = x;
        strcpy(type, "string");
    }

    Data(char x) {
        char_value = x;
        strcpy(type, "char");
    }

    Data(bool x) {
        bool_value = x;
        strcpy(type, "bool");
    }

    friend Data *operator+(Data &a, Data &b)
    {
        if (strcmp(a.type, "string") == 0 || strcmp(b.type, "string") == 0)
        {
            std::cout << "String nu este un operand valid la adunare." << '\n';
            return new Data("string");
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(int(a.int_value + b.int_value));
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(float(a.float_value + b.int_value));
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(float(a.int_value + b.float_value));
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(float(a.float_value + b.float_value));
        }
    }

    friend Data *operator-(Data &a, Data &b)
    {
        if (strcmp(a.type, "string") == 0 || strcmp(b.type, "string") == 0)
        {
            std::cout << "String nu este un operand valid la scadere. " << '\n';
            return new Data("string");
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(int(a.int_value - b.int_value));
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(float(a.float_value - b.int_value));
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(float(a.int_value - b.float_value));
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(float(a.float_value - b.float_value));
        }
    }

    friend Data *operator*(Data &a, Data &b)
    {
        if (strcmp(a.type, "string") == 0 || strcmp(b.type, "string") == 0)
        {
            std::cout << "String nu este un operand valid la inmultire. " << '\n';
            return new Data("string");
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(int(a.int_value * b.int_value));
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(float(a.float_value * b.int_value));
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(float(a.int_value * b.float_value));
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(float(a.float_value * b.float_value));
        }
    }

    friend Data *operator/(Data &a, Data &b)
    {
        if (strcmp(a.type, "string") == 0 || strcmp(b.type, "string") == 0)
        {
            std::cout << "String nu este un operand valid la impartire! " << '\n';
            return new Data("string");
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "int") == 0)
        {
            if (b.int_value == 0)
            {
                std::cout << "Impartirea la 0 nu este posibila." << '\n';
                return new Data("string");
            }
            return new Data(int(a.int_value / b.int_value));
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "int") == 0)
        {
            if (b.int_value == 0)
            {
                std::cout << "Impartirea la 0 nu este posibila." << '\n';
                return new Data("string");
            }
            return new Data(a.float_value / b.int_value);
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "float") == 0)
        {
            if (b.float_value == 0)
            {
                std::cout << "Impartirea la 0 nu este posibila." << '\n';
                return new Data("string");
            }
            return new Data(float(a.int_value / b.float_value));
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "float") == 0)
        {
            if (b.float_value == 0)
            {
                std::cout << "Impartirea la 0 nu este posibila." << '\n';
                return new Data("string");
            }
            return new Data(float(a.float_value / b.float_value));
        }
    }

    friend Data *operator==(Data &a, Data &b)
    {
        if (strcmp(a.type, "string") == 0 && strcmp(b.type, "string") == 0)
        {
            if (strcmp(a.string_value, b.string_value) == 0)
                return new Data(1);
            else
                return new Data(0);
        }
        if (strcmp(a.type, "string") == 0 || strcmp(b.type, "string") == 0)
        {
            std::cout << "String nu este un operand valid la comparare. " << '\n';
            return new Data("string");
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(int(a.int_value == b.int_value));
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(float(a.float_value == b.int_value));
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(float(a.int_value == b.float_value));
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(float(a.float_value == b.float_value));
        }
    }

    friend Data *operator!=(Data &a, Data &b)
    {
        if (strcmp(a.type, "string") == 0 && strcmp(b.type, "string") == 0)
        {
            if (strcmp(a.string_value, b.string_value) != 0)
                return new Data(1);
            else
                return new Data(0);
        }
        if (strcmp(a.type, "string") == 0 || strcmp(b.type, "string") == 0)
        {
            std::cout << "String nu este un operand valid la comparare. " << '\n';
            return new Data("string");
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(int(a.int_value != b.int_value));
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(float(a.float_value != b.int_value));
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(a.int_value != b.float_value);
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(a.float_value != b.float_value);
        }
    }
    friend Data *operator>(Data &a, Data &b)
    {
        if (strcmp(a.type, "string") == 0 && strcmp(b.type, "string") == 0)
        {
            if (strcmp(a.string_value, b.string_value) > 0)
                return new Data(1);
            else
                return new Data(0);
        }
        if (strcmp(a.type, "string") == 0 || strcmp(b.type, "string") == 0)
        {
            std::cout << "String nu este un operand valid la comparare. " << '\n';
            return new Data("string");
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(a.int_value > b.int_value);
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(a.float_value > b.int_value);
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(a.int_value > b.float_value);
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(a.float_value > b.float_value);
        }
    }
    friend Data *operator<(Data &a, Data &b)
    {
        if (strcmp(a.type, "string") == 0 && strcmp(b.type, "string") == 0)
        {
            if (strcmp(a.string_value, b.string_value) < 0)
                return new Data(1);
            else
                return new Data(0);
        }
        if (strcmp(a.type, "string") == 0 || strcmp(b.type, "string") == 0)
        {
            std::cout << "String nu este un operand valid la comparare. " << '\n';
            return new Data("string");
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(a.int_value < b.int_value);
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(a.float_value < b.int_value);
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(a.int_value < b.float_value);
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(a.float_value < b.float_value);
        }
    }

    friend Data *operator&&(Data &a, Data &b)
    {
        if (strcmp(a.type, "string") == 0 || strcmp(b.type, "string") == 0)
        {
            std::cout << "String nu este un operand valid la operatii logice. " << '\n';
            return new Data("string");
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(a.int_value && b.int_value);
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(a.float_value && b.int_value);
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(a.int_value && b.float_value);
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(a.float_value && b.float_value);
        }
    }

    friend Data *operator||(Data &a, Data &b)
    {
        if (strcmp(a.type, "string") == 0 || strcmp(b.type, "string") == 0)
        {
            std::cout << "String nu este un operand valid la operatii logice. " << '\n';
            return new Data("string");
        }
        if (strcmp(a.type, "string") == 0 || strcmp(b.type, "string") == 0)
        {
            std::cout << "String nu este un operand valid la operatii logice. " << '\n';
            return new Data("string");
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(a.int_value || b.int_value);
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "int") == 0)
        {
            return new Data(a.float_value || b.int_value);
        }
        if (strcmp(a.type, "int") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(a.int_value || b.float_value);
        }
        if (strcmp(a.type, "float") == 0 && strcmp(b.type, "float") == 0)
        {
            return new Data(a.float_value || b.float_value);
        }
    }
};
