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
        Soru : Ýkiden büyük pozitif bir tamsayý için
        a(n) = 2+4+6+8+10+....+2n sonucunu özyinelemeli fonksiyon kullanarak hesaplayýnýz.
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
/* Rekürsif Fonksiyon Örneði


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
