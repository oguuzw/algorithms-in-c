#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
10.[-10, 10] aralığında sırasıyla bir negatif bir pozitif sayıyı N adet rastgele üretilen
elemanı dizide rastgele seçilen yere yerleştiriniz. Ortalamayı en büyük yapan N/2 tane
ardışık sayı dizilimini bulunuz.
*/
int main(){
    int N,dizi[20],index,i,negatif_sayi,pozitif_sayi,sayac=0;
    srand(time(NULL));
    printf("kac tane sayi uretmek istiyorsunuz?");
    scanf("%d",&N);
    while(sayac!=N/2){
        index=rand()%N;
        negatif_sayi = (-1)*(rand()%11);
        dizi[index]=negatif_sayi;
        sayac++;
    }
    while(sayac!=N/2){
        index=rand()%N;
        pozitif_sayi = rand()%11;
        printf("pozitif:%d",pozitif_sayi);
        dizi[index]=pozitif_sayi;
        sayac++;
    }
    for(i=0;i<N;i++){
        printf("\n%d.sayi:%d",i+1,dizi[i]);
    }
}