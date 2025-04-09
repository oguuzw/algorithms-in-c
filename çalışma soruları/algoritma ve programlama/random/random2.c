#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
2. N adet [0-1] aralığında ondalık rastgele sayı üretiniz. En büyük ve en küçük sayıyı
bulunuz.
*/
int main(){
    srand(time(NULL));
    int N,i,j;
    float min=0,max=1;
    float random_sayilar[10],enbuyuk=0,enkucuk=1;
    printf("kac tane sayi uretmek istersiniz. ");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        random_sayilar[i]=(float)rand()/RAND_MAX*(max-min);
    }
    for(i=0;i<N;i++){
       if(enbuyuk<random_sayilar[i]){
            enbuyuk=random_sayilar[i];
       }
        printf("\n%d.sayi:%.3f",i+1,random_sayilar[i]);
    }
    for(i=0;i<N;i++){
       if(random_sayilar[i]<enkucuk){
            enkucuk=random_sayilar[i];
       }
    }
    printf("\nen buyuk sayi:%.3f\nen kucuk sayi:%.3f",enbuyuk,enkucuk);
}