// control flow
// if statements
#include <stdio.h>

int main()
{
    int a = 10, b = 5;
    if(a > b)
        printf("a is bigger");
    else if(a < b)
        printf("“b is bigger”");
    else
        printf("“a = b”");


    return 0;
}

/*

if (expr)
{
    statement 
}

ya da 

if (expr)
    statement

derleyici bir alt satiri dogrudan if'e ekler.
parantez kullanmaya gerek kalmaz

expr degeri dogru ise (1) if blogu calisir degilse sirayla
diger bloklardaki dogruluga bakilir. Eger hic biri olmazsa
en son else blogu calisir.

Nested if statements
• if( … )
    if( … )
        {….}
  else
  {….}


*/