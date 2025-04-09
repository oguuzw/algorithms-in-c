#include <stdio.h>
#include <stdlib.h>
/*
3. 1’den 10’a kadar olan sayıların n, nxn, n!, n^n değerlerini 
matrise aşağıdaki gibi matris oluşturunuz.

n    1 2 3 4 
nxn  1 4 9 16 25 36 49 64 81 100
n!   1 2 6 24
n^n  1 4 27 256
*/
int main(){
    int i,j,matris[4][10],faktoriyel=1,sonuc=1;
    for(i=0;i<10;i++){
        matris[0][i]=i+1;
        matris[1][i]=(i+1)*(i+1);
        matris[2][i]=faktoriyel*=(i+1);
        for(j=0;j<=i;j++){
            sonuc*=(i+1);
        }
        matris[3][i]=sonuc;
        sonuc=1;
    }
    for(i=0;i<4;i++){
        printf("\n");
        for(j=0;j<10;j++){
            printf("%d ",matris[i][j]);
        }
    }
}