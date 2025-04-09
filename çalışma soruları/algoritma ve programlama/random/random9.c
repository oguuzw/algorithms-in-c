#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
9. Sırasıyla bir asal ve bir asal olmayan olmak üzere [1-100] aralığında 
N adet rastgele sayı üretiniz. 
*/
int main(){
    int N,sayi[10],sayac=0,i,j,k,asalMi=1;
    srand(time(NULL));
    printf("kac tane sayi uretmek istiyorsunuz?");
    scanf("%d",&N);
    while(sayac!=N){
        if(sayac%2==0){    //sayac=cift sayi=asal
            sayi[sayac]=rand()%101;
            for(i=2;i<=(sayi[sayac]/2);i++){
                if(sayi[sayac]%i==0){
                    asalMi=0;
                    break;
                }else{
                	asalMi=1;
				}
            }
            if(asalMi==1){
                sayac++;
            }else{
                continue;
            }
        }else{  //sayac=tek  sayi=asal_degil
            sayi[sayac]=rand()%101;
            for(j=2;j<=(sayi[sayac]/2);j++){
                if(sayi[sayac]%j==0){
                    asalMi=0;
                    break;
                }else{
                    asalMi=1;
                }
            }
            if(asalMi==1){
                continue;
            }else{
            	sayac++;
			}
        }
    }
    for(k=0;k<N;k++){
    	printf("\n%d.sayi:%d",k+1,sayi[k]);
	}
}