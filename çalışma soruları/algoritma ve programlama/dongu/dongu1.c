#include <stdio.h>
int main()
{
    int i,sayi,buyuk;
    i=1;
    for(i=1;i<=10;i++)
    {
        printf("%d.sayiyi giriniz...",i);
        scanf("%d",&sayi);
        if(sayi>buyuk)
        {
            buyuk=sayi;
        }
    }
    printf("en buyuk sayi:%d",buyuk);
}