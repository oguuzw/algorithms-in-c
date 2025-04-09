#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
6. NxN lik bir matristeki verileri satırlar sütün olacak şekilde yer değiştiriniz. 
Yazdırma işleminde yer değişikliği yapmayınız. N=3 durumunda;
*/
int main(){
    int N,sayi=1,i,j;
    printf("N degeri giriniz:");
    scanf("%d",&N);
    int matris[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            matris[i][j]=sayi++;
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    sayi=1;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            matris[j][i]=sayi++;
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
}