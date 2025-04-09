#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int N=10,dizi[N],sayac=0,i;
    dizi[sayac++]=rand()%61+10;
    while(sayac<N){
        dizi[sayac]=rand()%61+10;
        if(dizi[sayac]<=dizi[sayac-1]-5 || dizi[sayac]>=dizi[sayac-1]+5){
            sayac++;
        }
    }
    for(i=0;i<N;i++){
        printf("%d ",dizi[i]);
    }
}