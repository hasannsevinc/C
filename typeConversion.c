#include <stdio.h>

int main()
{
    float a = 8.92;
    int b,d = 3 ,e = 2;
    char c = 'A';

    b = a; 
    printf("b : %d\n",b);
    b = c;
    printf("b = c : %d\n",b);

    b = 3;
    printf("a/b : %f\n",a/(float)b);

    printf("b / a : %f\n", b /a );

    b = (int)c;
    printf("(int)c : %d\n",b);

    printf("3 / 2 = %d\n", d/e);
    printf("3 / 2 : %f\n",3/2);
    printf("3 / (float)2 : %f\n",3/(float)2);
    return 0;

}

/*
    long float > float > int 

*/