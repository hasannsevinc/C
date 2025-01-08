#include <stdio.h>

int main()
{
    int a = 5,c;
    float b = 2.0,d = 3.46;
    char e = 'a';


    //1.
    printf("a/b : %f\n",a/b);

    //2.
    c = d;
    printf("c = d : %d\n",c);

    //3.
    a = e;
    printf("ascci 'A' : %d\n",a);

    //4.
    printf("3/2 : %d\n",3/2);
    printf("3/(float)2 : %f\n",3/ (float)2);

    //5.
    printf("'a' + 1 : %c",e+1);
    return 0;
}


/*

1. Tip donusumlerinde iki farkli tip kullanildiginda kucuk
olan otomatik olarak buyuk olana cevirilir.

char -> int -> long -> float -> double -> long double

2. float bir veri int veri tipinde donusurse virgulden
sonraki kismini kaybeder.

3. Char veri tipinde tutulan karakterlerin ascii 
degerleri mevcuttur. Bu yuzden char veri tipi
int veri tipine donustugu zaman ascii degerini alir.

4. int / int ' in sonucu her zaman bir int degeridir.
virgulden sonraki kisim icin int / (float)int
type cast islemi uygulanmali

5. karakterleri kullanarak matematiksel islemler yapilabilir.
(ascii ) 'a' + 1 = 'b';


*/