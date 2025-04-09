#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
5. N adet aralarında en fazla 0.1 kadar fark olan [0.2- 1.2] arasında rastgele sayı üretiniz.
*/
int main(){
    srand(time(NULL));
    int N=5,sayac=0;
    double dizi[N];
    double sayi=(rand()%101+20);
    dizi[sayac++]=sayi/100;
    while(sayac<N){
        sayi=(rand()%101+20);
        dizi[sayac]=sayi/100;
        if(dizi[sayac]>=dizi[sayac-1]-0.1 && dizi[sayac]<=dizi[sayac-1]+0.1){
            sayac++;
        }
    }

    for(int i=0;i<N;i++){
        printf("%lf ",dizi[i]);
    }
}