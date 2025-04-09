#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int N=5,matris[N][N],sayi=1;
    for(int i=0;i<N;i++){
        if(i%2==0){
            for(int j=0;j<N;j++){
                matris[j][i]=sayi++;
            }
        }else{
            for(int j=N-1;j>=0;j--){
                matris[j][i]=sayi++;
            }
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
}