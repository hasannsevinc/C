#include <stdio.h>

int main()
{
    int a;
    float b = 23.21;
    printf("Bir sayi giriniz : ");
    scanf("%d",&a);
    printf("Girilen sayi  :%5d\n",a); // a = 5 iken :    5 
    printf("Girilen sayi :%.5d\n",a); // a = 5 iken :00005
    
    printf("%3.1f",b);



    return 0;
}

/*
stdio.h kutuphanesinden scanf ve printf fonksiyonlarini
kullanicidan hem veri almak icin hem de ekrana cikti yazmak 
icin kullaniriz.

-- scanf(format string, &var1, &var2, … )
• var1, var2, ..: variables!

-- printf(format string, var1, var2, … )

Escapae Sequence            Description
\n                          new line
\t                          horizontal tab
\a                          alert
\\                          '/' backslash karakteri
\"                          '"' double quote

-- formating the output of integer values
%5d  --> 5 karakterlik bir cikti olur. Deger 5 basamaktan
kucuk ise geri kalanlar bosluk olarak eklenir

%.5d --> 5 karakterlik bir cikti olur ve deger 5 basamaktan 
kucuk ise soldan 0 eklenerek 5 e tamamlanir


-- formating the output of float values
%4.1f --> toplam 2 karakter
ve virgulden sonra 1 karakter olur
*/