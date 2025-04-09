#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main(){
    srand(time(NULL));
    int N=3,asal_sayac=0,dizi[N];
    while(asal_sayac<N){
        bool asal_Mi=true;
        int sayi=rand();
        for(int i=2;i<sayi/2;i++){
            if(sayi%i==0){
                asal_Mi=false;
                break;
            }
        }
        if(asal_Mi==true){
            dizi[asal_sayac++]=sayi;
        }
    }
    for(int i=0;i<N;i++){
        printf("%d ",dizi[i]);
    }
}