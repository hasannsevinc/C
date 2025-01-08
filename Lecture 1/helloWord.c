#include <stdio.h> // header

int main() // ana fonksiyon
{
    // program ilk olarak compile edilip calistirildiginda
    // main blogu calisir.


    return 0; // geri donus degeri
    // geri donus degeri eger 0  basariyla calismistir.
    // pozitif bir sayi ya da negatif bir sayi ile donerse program 
    // hatali calismistir
}

/*
    C language development environment
1. Editor: .c uzantili dosyaya kaynak kod yazilir

2. Preprocessor : Onisleme
makrolar islenir ( #define ), header (#include ) ' lar eklenir
kosullu derlemeyi ( #ifdef , #ifndef) isler

3.Compiler : Derleyici, kaynak kodunu makine diline cevirir.
bir .obj nesne dosyasi olusturur.

4. Linker : Nesne dosyasini kutuphanelerle birlestirir ve 
calistirilabilir bir executable dosya olusturur. 

5. Loader : baglama isleminden sonra loader, dosyayi bellege 
(ram) 'e yukler. Dinamik kutuphaneleri baglar. ( string.h, 
stdio.h) ve yurutme icin gerekli olan baslangic adresini 
CPU'ya teslim eder.

6. CPU : Baslangic adresinden baslayarak programin ilk 
komutunu calistirir. Sirayla kodlari binary bir sekilde okumaya 
baslar.

---------------------------------------

Bugs, Error

1. Logical Error  : Mantiksal hatalar
2. Design Error   : Formulsel yanlislar
3. Syntax Error   : Yazim hatalari
4. Run Time Error : Proram calisirken cikan hatalar





*/
