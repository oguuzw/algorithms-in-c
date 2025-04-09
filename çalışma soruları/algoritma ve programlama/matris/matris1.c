#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*1. 0-100 arasındaki rastgele sayılardan oluşturulmuş bir NxN’lik bir matris üzerinde en küçük, en büyük ve
ortalama sayıyı bulunuz.*/
int main(){
    srand(time(NULL));
    int N,i,j,buyuk=0,kucuk=100;
    float toplam=0,ortalama=0;
    printf("NxN lik matris icin N degeri giriniz:");
    scanf("%d",&N);
    int dizi[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            dizi[i][j]=rand()%101;
        }
    }
    for(i=0;i<N;i++){
        printf("\n");
        for(j=0;j<N;j++){
            printf("%d ",dizi[i][j]);
            if(dizi[i][j]>buyuk){
                buyuk=dizi[i][j];
            }
            if(dizi[i][j]<kucuk){
                kucuk=dizi[i][j];
            }
            toplam+=dizi[i][j];
        }
    }
    ortalama=toplam/(N*N);
    
    printf("\nen kucuk sayi:%d",kucuk);
    printf("\nen buyuk sayi:%d",buyuk);
    printf("\nortalama:%.2f",ortalama);
}