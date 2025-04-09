#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int N=10;
    double sayi,en_buyuk,en_kucuk;
    for(int i=0;i<N;i++){
        sayi=(rand()%101);
        sayi/=100;
        printf("\n%d.sayi:%lf",i+1,sayi);
        if(i==0 || sayi>en_buyuk){
            en_buyuk=sayi;
        }
        if(i==0 || sayi<en_kucuk){
            en_kucuk=sayi;
        }
    }
    printf("\nen buyuk sayi:%lf",en_buyuk);
    printf("\nen kucuk sayi:%lf",en_kucuk);
}