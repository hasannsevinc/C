#include <stdio.h>

int main()
{

    int a = 5, b = 0b011, c = 0xA;
    float a1 = 5.0;
    double d = 5.99912;
    char ch = 'A';

    printf("a  = %d\n",a);
    printf("b  = %d\n",b);
    printf("c  = %d\n",c);
    printf("d  = %lf\n",d);
    printf("a1 = %f\n",a1);
    printf("ch = %c\n",ch);
    
    

    return 0;
}

// Degisken kurallari
/*
    Degiskenler sadece harfler, sayilar ve '_' ile tanimlanabilir.
    Degiskenler harf ile baslamak zorundadir.

-- Data Types : Veri Tipleri

1. integer 
- Tam sayilar
- Bellekte 4 byte yer kaplar
- Ozel formati %d dir

2. Float
- Kesirli sayilar
- Bellekte 4 byte yer kaplar
- Ozel formati %f dir

3. Double
- Daha uzun kesirli sayilari tutar
- Bellekte 8 byte yer kaplar
- Ozel formati %lf

4. Char
- Karakterleri tutar ('A', '8','!', ...)
- Bellekte 1 byte yer kaplar (0 - 256)
- 0 ile 128 arasinda ASCII tablosu bulunur
her karakterin decimal bir degeri vardir.
- Ozel formati %c dir

Number Systems:
• Decimal (base 10): 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
• Binary (base 2): 0, 1
• Octal (base 8): 0, 1, 2, 3, 4, 5, 6, 7
• Hexadecimal (base 16): 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A, B, C, D, E, F

• Prefixes: 0b (binary), 0 (octal), 0x (hexadecimal)

012 = octal
0x12 = hexadecimal
0b1010 = binary

*/