#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main(){
    srand(time(NULL));
    int N=10,dizi[N],sayac=0,sayi;
    while(sayac<N){
        bool asal_Mi=true;
        sayi=rand()%101;
        for(int i=2;i<sayi/2;i++){
            if(sayi%i==0){
                asal_Mi=false;
            }
        }
        if(sayac%2==0 && asal_Mi==true){
            dizi[sayac++]=sayi;
        }else if(sayac%2==1 && asal_Mi==false){
            dizi[sayac++]=sayi;
        }
    }
    for(int i=0;i<N;i++){
        printf("%d ",dizi[i]);
    }
}