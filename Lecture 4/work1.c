/*
Write a C code that solves the following system of
linear equations:
𝑎𝑥 + 𝑏𝑦 = 𝑐
𝑑𝑥 + 𝑒𝑦 = 𝑓
• Your program should read 𝑎, 𝑏, 𝑐, 𝑑, 𝑒 and 𝑓 from
standard input, and display the values of 𝑥 and 𝑦 to the
standard output.
• Bring the print-out of the C code to the next lecture.
*/

#include <stdio.h>

int main()
{
 
    float a,b,c,d,e,f,x,y;
    printf("1. lineer denklemi giriniz : ");
    scanf("%f %f %f",&a,&b,&c);
    printf("2. lineer denklemi giriniz : ");
    scanf("%f %f %f",&d,&e,&f);

    x = ((c*e) - (f*b))/((a*e) - (d*b));
    y = (c - (x * a))/b;

    printf("x : %.f\ny : %.f",x,y);

    // payda 0 olma durumunu goz ardi ettim
    return 0;
}