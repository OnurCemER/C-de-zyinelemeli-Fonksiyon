#include <stdio.h>
#include <stdlib.h>

int fonk(int a)
    {
        if(a<1)
            return a;
        return a*2 + fonk(a-1);
    }

int main()
{
    /**
        Soru : �kiden b�y�k pozitif bir tamsay� i�in
        a(n) = 2+4+6+8+10+....+2n sonucunu �zyinelemeli fonksiyon kullanarak hesaplay�n�z.
    **/

    int a;
    printf("Birden Buyuk Bir Sayi Girin : ");
    scanf("%d",&a);

    if(a<2)
    {
        printf("Sayi Birden Buyuk Degil!");

    }

    else
        {
            printf("Sonuc = %d",fonk(a));
        }
/* Rek�rsif Fonksiyon �rne�i


    int factorial (int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial (n - 1);
}

*/
    return 0;
}
