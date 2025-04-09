#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
7. dizi[M] [-10, +10 ] arasında rastgele sayılardan üretilmiş bir dizi olmak üzere; matris[N][N] bir matrise dizideki
verileri gönderiniz. Sırasıyla negatifler çift satırlarda, pozitifler tek satırlarda olacaktır. N sayısı girilecek; ardından
N sayısına göre pozitif ve negatif sayı adetleri dengeli olarak üretilecektir. Örneğin N=3 ise, 6 pozitif, 3 negatif
gibi. M=N*N 
 */
int main(){
    srand(time(NULL));
    int N,i,cift_sayac=0,j=0,negatif_sayisi,negatif_sayac=0,k;
    printf("N degerini giriniz:");
    scanf("%d",&N);
    int matris[N][N];
    int M=N*N;
    int dizi[M];
    for(i=1;i<=N;i++){
        if(i%2==0){
            cift_sayac++;
        }
    }
    negatif_sayisi=cift_sayac*N;
    while(j<M){
        dizi[j++]=rand()%10+1;
        if(negatif_sayac<negatif_sayisi){
            dizi[j++]=-(rand()%10+1);
            negatif_sayac++;
        }
    }
} 