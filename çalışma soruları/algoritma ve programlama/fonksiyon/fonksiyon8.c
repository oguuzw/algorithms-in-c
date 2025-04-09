#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
void Res(int N){
    int sayac=1;
    double R_es_paralel=0,R_es_seri=0;
    while(sayac<=N){
        int paralel_or_seri=rand()%2;  // 0 ise paralel  // 1 ise seri 
        double R;
        printf("%d devre icin (0 paralel 1 seri) deger gir.");
        scanf("%lf",&R);
        if(paralel_or_seri==0){
            R_es_paralel+=1/R;
        }else{
            R_es_seri+=R;
        }
        sayac++;                             
    }
    double R_es=1/(R_es_paralel)+R_es_seri;
    printf("R es degeri:%lf",R_es);
}
int main(){
    srand(time(NULL));
    int N=4;
    Res(N);
}