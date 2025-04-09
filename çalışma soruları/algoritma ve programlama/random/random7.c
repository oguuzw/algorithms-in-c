#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
7. [0-100] aralığında N adet büyükten küçüğe sıralı olacak şekilde
   rastgele sayı üretiniz.
*/
int main(){
    srand(time(NULL));
    int N,sayi[10],sayac,i;
    printf("kac tane sayi uretmek istersiniz?");
    scanf("%d",&N);
    sayi[sayac++]=rand()%101;
    while(sayac!=N){
        sayi[sayac]=rand()%101;
        if(sayi[sayac]<sayi[sayac-1]){
            sayac++;
        }else{
            continue;
        }
    }
    for(i=0;i<N;i++){
        printf("\n%d.sayi:%d",i+1,sayi[i]);
    }
}