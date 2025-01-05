#include <stdio.h>


int sum(int, int);
int subtract(int, int);
int multiply(int, int);
float divide(float, float);

int main(void)
{
    char op;
    printf("Enter an operator (+, -, *, /): ");
    op = getchar();
    switch (op)
    {
    case '+':
        int a, b;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        printf("Addition = %d\n", sum(a, b));
        break;
    case '-':
        int c, d;
        printf("Enter two numbers: ");
        scanf("%d %d", &c, &d);
        printf("Subtraction = %d\n", subtract(c, d));
        break;
    case '*':
        int e, f;
        printf("Enter two numbers: ");
        scanf("%d %d", &e, &f);
        printf("Multiply = %d\n", multiply(e, f));
        break;

    case '/':
        float g, h;
        printf("Enter two numbers: ");
        scanf("%d %d", &g, &h);
        printf("Divide = %.2f\n", divide(g, h));
        break;

    default:
    printf("Invalid operator\n");
        break;
    }
}

int sum(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}