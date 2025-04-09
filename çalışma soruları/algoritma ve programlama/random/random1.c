#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
1. N adet rastgele sayı [0-100] aralığında üretiniz. Ortalamadan küçük olan sayıları
ortalamadan büyük olacak şekilde yeniden üretiniz.
*/
int main(){
    int N,random_sayilar[100],i,toplam=0,ortalama=0;
    srand(time(0));
    printf("kac tane random sayi uretmek istersiniz. ");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        random_sayilar[i]=rand()%101;
        toplam+=random_sayilar[i];
        printf("\nrandom sayi:%d",random_sayilar[i]);  //uretilen ilk degerler
    }
    
    ortalama=toplam/N;
    printf("\n\n ortalama:%d\n\n",ortalama);
    for(i=0;i<N;i++){
        if(random_sayilar[i]<ortalama){
            random_sayilar[i]=(rand()%(101-ortalama)+ortalama);
        }
        printf("\n%d.sayi:%d",i+1,random_sayilar[i]);
    }
}