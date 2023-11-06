#include <stdio.h>

int main()
{

    int x;     // declaration
    x = 5;     // Initialization
    int y = 7; // Decleration + initialization

    int integer = 10;        // Whole number, Int
    float floating = 5.2;    // Number with decimal, Float
    char character = 'j';    // One Single char, Char
    char string[] = "hello"; // Array of chars (basically a string), Char[]

    printf("Hi, %s\n", string);
    printf("%d is a int\n", integer);
    printf("%f is a float\n", floating);
    printf("%c is a char\n", character);
    return 0;
}

/*
    Declaration:
            variable name
            ↓
    int     x; ← Declares statment
    ^
    data type
-------------------------------------
    Initialization:
    x   =   5;
    ^       ^ The value (MUST MATCH DATA TYPE.)
    Variable name

*/