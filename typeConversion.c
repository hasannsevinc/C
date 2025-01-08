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
    printf("3 / 2 : %f\n",3/2); // 0
    printf("3 / (float)2 : %f\n",3/(float)2); // 1.5
    return 0;

}

/*
    float a = 5.25;
    int b = a;
    Casting from float to int. The value of b here is 
    char c = ‘A’

    int x = c;
    Casting from char to int.
    The value of x here is 65: the ASCII code of ‘A’
    
    int x=7, y=5 ;
    float z;
    z=x/y;
    the value of z is 1.00 
    
    int x=7, y=5;
    float z;
    z = (float)x/(float)y;
    the value of z is 1.4
    
*/

