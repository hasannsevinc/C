#include <stdio.h>

int main(void){
    // variable declaration
    int a = 0b0011; // 3
    float b = 20.5;
    double c = 30.5;
    char d = 'A';
    char e[] = "Hello World"; // string

    printf("%d",a);

    return 0;
}

/*  

Naming rules:
• Variable names can contain letters,digits and _
• Variable names should start with letters.

• Keywords (e.g., for,while etc.) cannot be used as variable
names
• Variable names are case sensitive. int x; int X declares
two different variables. 


Number Systems:
• Decimal (base 10): 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
• Binary (base 2): 0, 1
• Octal (base 8): 0, 1, 2, 3, 4, 5, 6, 7
• Hexadecimal (base 16): 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F

• Prefixes: 0b (binary), 0 (octal), 0x (hexadecimal)

012 = octal
0x12 = hexadecimal
0b1010 = binary

*/