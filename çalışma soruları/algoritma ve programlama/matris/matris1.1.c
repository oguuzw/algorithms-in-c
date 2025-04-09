#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int N=10,matris[N][N],en_kucuk,en_buyuk;
    double toplam,ortalama;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            matris[i][j]=rand()%101;
            toplam+=matris[i][j];

            if((i==0 && j==0) || matris[i][j]>en_buyuk){
                en_buyuk=matris[i][j];
            }
            if((i==0 && j==0) || matris[i][j]<en_kucuk){
                en_kucuk=matris[i][j];
            }
        }
    }
    ortalama=toplam/(N*N);
    printf("en buyuk sayi:%d",en_buyuk);
    printf("\nen kucuk sayi:%d",en_kucuk);
    printf("\nortalama:%lf",ortalama);
}