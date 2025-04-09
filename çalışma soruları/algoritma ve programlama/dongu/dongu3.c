#include <stdio.h>
int main()
{
    int i,sayi,toplam;
    toplam=0;
    printf("\nLutfen sayiyi giriniz: ");
    scanf("%d",&sayi);
    for(i=2;i<=sayi;i++)
    {
        if(sayi%i==0)
        {
            toplam=toplam+(sayi/i);
        }
    }
    if(toplam==sayi)
    {
        printf("mukemmel sayi");
    }
    else
    {
        printf("mukemmel sayi degildir");
    }
    
}