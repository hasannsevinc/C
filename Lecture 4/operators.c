#include <stdio.h>

int main(void)
{
    int a = 1, b = 2, c = 3;
    printf("Arithmetic Operators\n");
    printf("%d\n", a + b); // 3
    printf("%d\n", a - b); // -1
    printf("%d\n", a * b); // 2
    printf("%d\n", a / b); // 0
    printf("%d\n", a % b); // 1

    printf("Relational Operators\n"); // Output: 0  or 1
    printf("%d\n", a == b); // 0
    printf("%d\n", a != b); // 1
    printf("%d\n", a > b);  // 0
    printf("%d\n", a < b);  // 1
    printf("%d\n", a >= b); // 0
    printf("%d\n", a <= b); // 1
    
    printf("Logical Operators\n"); // Output: 0  or 1
    printf("%d\n", a && b); // 1
    printf("%d\n", a || b); // 1
    printf("%d\n", !a);     // 0
    
    printf("Bitwise Operators\n"); // Bitwise operators work on bits and perform bit-by-bit operation.
    printf("a & b : %d\n", a & b);  // 0
    printf("%d\n", a | b);  // 3
    printf("%d\n", a ^ b);  // 3
    printf("%d\n", ~a);     // -2
    printf("%d\n", a << b); // 4
    printf("%d\n", a >> b); // 0
    
    printf("Increment and Decrement Operators\n");
    printf("a++ : %d\n", a++); // 1
    printf("a : %d\n", a);     // 2
    printf("++a : %d\n", ++a); // 3

    return 0;
}

// Operators in C:
/*

• Arithmetic operators: +, -, *, /, % (modulus)
• Relational operators: ==, !=, >, <, >=, <=
• Logical operators: && (AND), || (OR), ! (NOT)
• Bitwise operators: &, |, ^, ~, <<, >>

-- Logical Operators:
• && (AND): Returns true if both the operands are true
0 && 0 = 0
0 && 1 = 0
1 && 0 = 0
1 && 1 = 1

• || (OR): Returns true if one of the operands is true
0 || 0 = 0
0 || 1 = 1
1 || 0 = 1
1 || 1 = 1

• ! (NOT): Returns true if the operand is false
!0 = 1
!1 = 0
!9 = 0
!-1 = 0

-- Bitwise Operators:
• & (AND): Bitwise AND
1 & 1 = 1
1 & 0 = 0
0 & 1 = 0
0 & 0 = 0

• | (OR): Bitwise OR
1 | 1 = 1
1 | 0 = 1
0 | 1 = 1
0 | 0 = 0

• ^ (XOR): Bitwise XOR
1 ^ 1 = 0
1 ^ 0 = 1
0 ^ 1 = 1
0 ^ 0 = 0

• ~ (NOT): Bitwise NOT
~1 = 0
~0 = 1

• << (left shift): Shifts the bits of the number to the left
1 << 2  = (100) : 4

• >> (right shift): Shifts the bits of the number to the right
1 >> 2  = (0) : 0
4 >> 1 = (10) : 2

Decrement and Increment Operators:
!!! degiskenin bellekteki degerine uygulanir !!!
• ++: Increment operator
• --: Decrement operator

5++ = 6 ( first use then increment)
++5 = 6 ( first increment then use)

5-- = 4 ( first use then decrement)
--5 = 4 ( first decrement then use)

*/