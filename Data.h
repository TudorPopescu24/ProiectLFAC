#include <iostream>
#include <cstring>
#include <string.h>

class Data
{ //Stocheaza tipul si valoarea variabilei
public:
    char type[10];
    
    int int_value;
    float float_value;
    char *string_value;
    char char_value;
    bool bool_value;

    char* int_type="int";
    char* float_type="float";
    char* string_type="string";
    char* char_type="char";
    char* bool_type="bool";

    Data(int x)
    {
        int_value = x;
        strcpy(type, "int");
    }

    Data(float x)
    {
        float_value = x;
        strcpy(type, "float");
    }

    Data(char *x)
    {
        string_value = x;
        strcpy(type, "string");
    }

    Data(char x)
    {
        char_value = x;
        strcpy(type, "char");
    }

    Data(bool x)
    {
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
        if (strcmp(a.type, "bool") == 0 || strcmp(b.type, "bool") == 0)
        {
            std::cout << "Bool nu este un operand valid la adunare." << '\n';
            return new Data("bool");
        }
        if (strcmp(a.type, "char") == 0 || strcmp(b.type, "char") == 0)
        {
            std::cout << "Char nu este un operand valid la adunare." << '\n';
            return new Data("char");
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
        if (strcmp(a.type, "bool") == 0 || strcmp(b.type, "bool") == 0)
        {
            std::cout << "Bool nu este un operand valid la adunare." << '\n';
            return new Data("bool");
        }
        if (strcmp(a.type, "char") == 0 || strcmp(b.type, "char") == 0)
        {
            std::cout << "Char nu este un operand valid la adunare." << '\n';
            return new Data("char");
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
        if (strcmp(a.type, "bool") == 0 || strcmp(b.type, "bool") == 0)
        {
            std::cout << "Bool nu este un operand valid la adunare." << '\n';
            return new Data("bool");
        }
        if (strcmp(a.type, "char") == 0 || strcmp(b.type, "char") == 0)
        {
            std::cout << "Char nu este un operand valid la adunare." << '\n';
            return new Data("char");
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
        if (strcmp(a.type, "bool") == 0 || strcmp(b.type, "bool") == 0)
        {
            std::cout << "Bool nu este un operand valid la adunare." << '\n';
            return new Data("bool");
        }
        if (strcmp(a.type, "char") == 0 || strcmp(b.type, "char") == 0)
        {
            std::cout << "Char nu este un operand valid la adunare." << '\n';
            return new Data("char");
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
        if (strcmp(a.type, "bool") == 0 && strcmp(b.type, "bool") == 0)
        {
            return new Data(bool(a.bool_value == b.bool_value));
        }
        if (strcmp(a.type, "char") == 0 && strcmp(b.type, "char") == 0)
        {
            return new Data(char(a.char_value == b.char_value));
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
        if (strcmp(a.type, "bool") == 0 && strcmp(b.type, "bool") == 0)
        {
            return new Data(bool(a.bool_value != b.bool_value));
        }
        if (strcmp(a.type, "char") == 0 && strcmp(b.type, "char") == 0)
        {
            return new Data(char(a.char_value != b.char_value));
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
        if (strcmp(a.type, "bool") == 0 && strcmp(b.type, "bool") == 0)
        {
            std::cout << "Bool nu este un operand valid la comparare." << '\n';
            return new Data(false);
        }
        if (strcmp(a.type, "char") == 0 && strcmp(b.type, "char") == 0)
        {
            return new Data(char(a.char_value > b.char_value));
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
        if (strcmp(a.type, "bool") == 0 && strcmp(b.type, "bool") == 0)
        {
            std::cout << "Bool nu este un operand valid la comparare." << '\n';
            return new Data(false);
        }
        if (strcmp(a.type, "char") == 0 && strcmp(b.type, "char") == 0)
        {
            return new Data(char(a.char_value < b.char_value));
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
        if (strcmp(a.type, "bool") == 0 && strcmp(b.type, "bool") == 0)
        {
            return new Data(bool(a.bool_value && b.bool_value));
        }
        if (strcmp(a.type, "char") == 0 && strcmp(b.type, "char") == 0)
        {
            std::cout << "Char nu este un operand valid la operatii logice. " << '\n';
            return new Data((char)0);
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
        if (strcmp(a.type, "bool") == 0 && strcmp(b.type, "bool") == 0)
        {
            return new Data(bool(a.bool_value || b.bool_value));
        }
        if (strcmp(a.type, "char") == 0 && strcmp(b.type, "char") == 0)
        {
            std::cout << "Char nu este un operand valid la operatii logice." << '\n';
            return new Data((char)0);
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

    char *to_string()
    {
        char *data = (char *)malloc(20);
        if (strcmp(type, "string") == 0)
        {
            return string_value;
        }
        if (strcmp(type, "int") == 0)
        {
            sprintf(data, "%d", int_value);
            return data;
        }
        if (strcmp(type, "float") == 0)
        {
            sprintf(data, "%.2f", float_value);
            return data;
        }
        if (strcmp(type, "bool") == 0)
        {
            sprintf(data, "%d", bool_value);
            return data;
        }
        if (strcmp(type, "char") == 0)
        {
            sprintf(data, "%c", char_value);
            return data;
        }
        return "string";
    }

    char *to_string_type()
    {
        if (strcmp(type, "string") == 0)
        {
            return string_type;
        }
        if (strcmp(type, "int") == 0)
        {
            return int_type;
        }
        if (strcmp(type, "float") == 0)
        {
            return float_type;
        }
        if (strcmp(type, "char") == 0)
        {
            return char_type;
        }
        if (strcmp(type, "bool") == 0)
        {
            return bool_type;
        }
        return "class";

    }
};
