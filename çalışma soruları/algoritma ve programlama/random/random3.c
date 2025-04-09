#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
3. N adet rastgele asal sayi uretiniz.
*/
int main(){
    int N,asal_sayi,i,sayac=0,asalMi=0;
    srand(time(NULL));
    printf("kac tane asal sayi uretmek istersiniz.");
    scanf("%d",&N);
    while(sayac!=N){
        asal_sayi=rand();
        for(i=2;i<=(asal_sayi/2);i++){
            if(asal_sayi%i==0){
                asalMi=0;
                break;
            }
            asalMi=1;
        }
        if(asalMi==1){
            sayac++;
            printf("\n%d.asal sayi:%d",sayac,asal_sayi);
        }
    }
}
