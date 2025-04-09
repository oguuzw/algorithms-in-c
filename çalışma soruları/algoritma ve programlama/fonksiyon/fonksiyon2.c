#include <stdio.h>
#include <stdlib.h>
/*
2. Parametre olarak verilen iki tam sayı arasındaki sayılardan 3’ün katı olan sayıların ortalamasını bulan
fonksiyonu yazınız.
*/
void ortalama_hesapla(int sayi1,int sayi2){
    int kucuk,buyuk,ucun_kati_sayac=0;
    double toplam=0,ortalama=0;
    if(sayi1<sayi2){
        kucuk=sayi1;
        buyuk=sayi2;
    }else{
        kucuk=sayi2;
        buyuk=sayi1;
    }
    for(int i=kucuk;i<=buyuk;i++){
        if(i%3==0){
            printf("%d ",i);
            toplam+=i;
            ucun_kati_sayac++;
        }
    }
    ortalama=toplam/ucun_kati_sayac;
    printf("\nortalama:%lf",ortalama);
}
int main(){
    int sayi1,sayi2;
    printf("birinci sayiyi giriniz");
    scanf("%d",&sayi1);
    printf("ikinci sayiyi giriniz");
    scanf("%d",&sayi2);
    ortalama_hesapla(sayi1,sayi2);
}