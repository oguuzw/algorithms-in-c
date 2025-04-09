#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
4. N adet aralarında en az 5 fark olacak şekilde [10-70] aralığında
 rastgele sayı üretiniz.
*/
int main(){
    int N,sayilar[N],index=0,i,farklari;
    srand(time(NULL));
    printf("kac adet sayi uretmek istiyorsunuz?");
    scanf("%d",&N);
    sayilar[index++]=(rand()%61)+10;
    while(index!=N){
        sayilar[index]=(rand()%61)+10;
        farklari=(sayilar[index]-sayilar[index-1]);
        if(farklari<0){
            farklari=-farklari;
        }
        if( farklari>=5){
            index++;
        }
    }
    for(i=0;i<N;i++){
        printf("\n%d.sayi:%d",i+1,sayilar[i]);
    }
}