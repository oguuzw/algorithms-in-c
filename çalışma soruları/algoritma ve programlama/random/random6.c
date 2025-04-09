#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
6. [0-100] aralığında N adet küçükten büyüğe sıralı olacak şekilde 
rastgele sayı üretiniz.
*/
int main(){
    srand(time(NULL));
    int N,sayi[10],index=0,i;
    printf("kac tane sayi uretmek istersiniz.");
    scanf("%d",&N);
    sayi[index++]=rand()%101;
    while(index!=N){
        sayi[index]=rand()%101;
        if(sayi[index-1]<sayi[index]){
            index++;
        }else{
            continue;
        }
    }
    for(i=0;i<N;i++){
        printf("\n%d.sayi:%d",i+1,sayi[i]);
    }
}