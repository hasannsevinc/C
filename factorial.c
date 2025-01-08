#include <stdio.h>

int factorial(int);

int main(void )
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d\n", n, factorial(n));
    return 0;
}

int factorial(int n)
{
    if ( n == 1)
    {
        return 1;
    }

    return n * factorial(n-1);
}