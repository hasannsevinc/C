/*
int x = -1
if(x++ == 0) printf("%d\n",x);
else if(++x > 1) printf("%d",x);
else printf("%d",x);

ciktisi ne olur ?? 
*/

#include <stdio.h>

int main()
{
    int x = -1;
    if(x++ == 0)
        printf("%d\n",x);
    else if(++x > 1) 
        printf("%d",x);
    else 
        printf("%d",x);

return 0;
}