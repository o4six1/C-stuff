#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 5; // Stores whole number   %d

    char b = 'b';     // Stores 1 character    %c
    char c[] = "abc"; // Stores a array of characters %s

    float d = 3.9898989898989898;  // Stores a number with decimals  %f
    double e = 3.9898989898989898; // Stores a number with decimals, But more accurate  %lf

    bool f = false; // Stores true or false %d

    char g = 100;          // Can store numbers as well (-128 to 127) %d, %c (d for int, c for char)
    unsigned char h = 230; // Same as above, but range is different (0 to 255) %d, %c

    short i = -4096;          // regular short (small int) (-32768 to 32767) %d
    unsigned short j = 65535; // Unsigned short (0 to 65535) %d

    int k = 2147483647;          // Regular int (-2147483648 to 2147483647) %d
    unsigned int l = 4294967295; // unsigned int (0 to 4294967295) %u

    long long int n = 9223372036854775807;            // Long int (-9223372036854775808 to 9223372036854775807) %lld
    unsigned long long int m = 18446744073709551615U; // Unsigned long int (0 to 18446744073709551615) %llu (the U at the end is to prevent error)

    // print out vars
    printf("%d\n", a);        // Int
    printf("%c\n", b);        // Char
    printf("%s\n", c);        // Char[] (string)
    printf("%0.15f\n", d);    // float
    printf("%0.15lf\n", e);   // double
    printf("%d\n", f);        // boolean (1 = true,0 = false)
    printf("%c\t%d\n", g, g); // char/decimal (Char, Decimal)
    printf("%c\t%d\n", h, h); // unsigned char/decimal (Char, Decimal)
    printf("%d\n", i);        // short
    printf("%d\n", j);        // unsigned short
    printf("%d\n", k);        // int
    printf("%u\n", l);        // Unsigned int
    printf("%lld\n", n);      // Long int
    printf("%llu\n", m);      // Unsigned long int

    return 0;
}