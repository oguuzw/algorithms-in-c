#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
5. NxN lik bir matris içinde verileri 
sırasıyla aşağıdaki formda yerleştiriniz. N=3 olduğunda;

1 6 7
2 5 8     (1.form)
3 4 9

*/
int main(){
    int N,sayi=1,i,j;
    printf("N degeri giriniz.");
    scanf("%d",&N);
    int matris[N][N];
    for(i=0;i<N;i++){
        if(i%2==0){
            for(j=0;j<N;j++){
                matris[j][i]=sayi++; 
            }
        }else{
            for(j=(N-1);j>=0;j--){
                matris[j][i]=sayi++;
            }
        }    
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }

/*
9 4 3
8 5 2   (4.form)
7 6 1
*/
    int sayi3;
    printf("N degeri giriniz.");
    scanf("%d",&N);
    int matris3[N][N];
    sayi3=N*N;
    for(i=0;i<N;i++){
        if(i%2==0){
            for(j=0;j<N;j++){
                matris3[j][i]=sayi3--; 
            }
        }else{
            for(j=(N-1);j>=0;j--){
                matris3[j][i]=sayi3--;
            }
        }    
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%d ",matris3[i][j]);
        }
        printf("\n");
    }
}