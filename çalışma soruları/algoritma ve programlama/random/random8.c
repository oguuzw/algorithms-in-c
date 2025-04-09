#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
8. Sırasıyla bir tek ve bir çift olmak üzere [1-100] aralığında 
   N adet rastgele sayı üretiniz
*/
int main(){
    int N,sayi[10],i,sayac=0;
    srand(time(NULL));
    printf("kac tane sayi uretmek istersiniz?");
    scanf("%d",&N);
    while(sayac!=N){
        if(sayac%2==0){   //sayac=cift  sayi=tek
            sayi[sayac]=rand()%101;
            if(sayi[sayac]%2==1){
                sayac++;
            }else{
                continue;
            }
        }else{   //sayac=tek  sayi=cift
            sayi[sayac]=rand()%101;
            if(sayi[sayac]%2==0){
                sayac++;
            }else{
                continue;
            }
        }
    }
    for(i=0;i<N;i++){
        printf("\n%d.sayi:%d",i+1,sayi[i]);
    }
}