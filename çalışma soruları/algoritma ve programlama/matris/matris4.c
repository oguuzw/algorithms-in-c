#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
0-10 arası rastgele sayılardan oluşturulmuş NxN bir matris içerisinde iki köşegende bulunan sayıların yerlerini
ters çeviren program kodunu yazınız.
*/
int main(){
    srand(time(NULL));
    int N,i,j;
    printf("NxN lik matris icin N degeri giriniz:");
    scanf("%d",&N);
    int matris[N][N],tersmatris[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            matris[i][j]=rand()%11;
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
           tersmatris[i][j]=matris[i][j];         
        }
    }

    tersmatris[0][0]=matris[N-1][0];
    tersmatris[N-1][0]=matris[0][0];
    tersmatris[0][N-1]=matris[N-1][N-1];
    tersmatris[N-1][N-1]=matris[0][N-1];
    printf("\n\n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d ",tersmatris[i][j]);
        }
        printf("\n");
    }
}