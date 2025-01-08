#include <stdio.h>

int main() {
    int number = 10;

    // if-else statement
    if (number > 0) {
        printf("The number is positive.\n");
        if (number == 10)
        {
            // nested if-else statement
        }
        
    } else {
        printf("The number is not positive.\n");
    }

    // for loop
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }

    // while loop
    int count = 0;
    while (count < 5) {
        printf("count = %d\n", count);
        count++;
    }

    // do-while loop
    int j = 0;
    do {
        printf("j = %d\n", j);
        j++;
    } while (j < 5);

    // switch statement
    int day = 3;
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        default:
            printf("Weekend\n");
            break;
    }

    return 0;
}

// Control Flow in C:
// • Conditional statements: if-else
// • Looping statements: for, while, do-while
// • Switch statement
// keywords: if, else, for, while, do, switch, case, break, default