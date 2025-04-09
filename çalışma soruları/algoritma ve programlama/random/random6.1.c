#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int N=5,dizi[N],sayac=0,sayi;
    while(sayac<N){
        sayi=rand()%101;
        if(sayac==0 || sayi>dizi[sayac-1]){
            dizi[sayac++]=sayi;
        }
    }
    for(int i=0;i<N;i++){
        printf("%d ",dizi[i]);
    }
}