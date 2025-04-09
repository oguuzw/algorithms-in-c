#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int N=5,matris[N][N],matris2[N][N],sayi=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            matris[i][j]=sayi++;
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            matris2[j][i]=matris[i][j];
        }
    }
    printf("\n\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d ",matris2[i][j]);
        }
        printf("\n");
    }
}