#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int N=100,dizi[N];
    double toplam=0,ortalama=0; 
    for(int i=0;i<N;i++){
        dizi[i]=rand()%101;
        toplam+=dizi[i];
        printf("%d ",dizi[i]);
    }
    ortalama=toplam/N;
    int ortalamanin_int_degeri=ortalama;
    printf("\nortalama:%lf",ortalama);
    for(int i=0;i<N;i++){
        if(dizi[i]<ortalama){
            dizi[i]=(rand()%(101-ortalamanin_int_degeri))+ortalama;
        }
    }
    printf("\n\n");
    for(int i=0;i<N;i++){
        printf("%d ",dizi[i]);
    }
}