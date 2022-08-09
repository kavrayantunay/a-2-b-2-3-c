/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//bu kodda a^2 + b^2 = 3c işlemini yapan kodu yazacağım.

#include <stdio.h>

int main()
{
    int a,b,c; //işlemde kullanılacak değişkenler tanımlandı
    printf("Lütfen a,b ve c değerlerini sırasıyla giriniz:");
    scanf("%d%d%d", &a,&b,&c);
    printf("denklem sonucu: %d", a*a + b*b + 3*c);
    
}
