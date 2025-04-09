#include <stdio.h>
//8- sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 }; 
//Yukarıdaki sayı dizisinde indisleri tek olan sayıların ortalamasını bulan ve ortalamadan 
//büyük olan (sadece tek indisli) sayıları ekrana yazdıran program kodunu yazınız.  
//Not: indis 0 ile başlar. 20 sayısı 0. İndistedir. 60, 42, 24 gibi sayılar işleme tabi tutulmalıdır.
int main()
{
    int dizi[]={20,60,45,42,23,24,26,125,66,55,145,50,30,40},i,toplam=0,ort=0;
    for(i=1;i<14;i+=2)
    {
        toplam+=dizi[i];
    }
    ort=toplam/7;
    printf("ortalama:%d",ort);
    for(i=1;i<14;i+=2)
    {
        if(dizi[i]>ort)
        {
            printf("\n%d indisli %d sayisi ortalamadan buyuk.",i,dizi[i]);
        }
    }
}