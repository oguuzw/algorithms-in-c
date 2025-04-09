#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
2. N öğrenci ve M adet ders olacak şekilde 0-100 arasındaki rastgele sayılardan oluşturulmuş bir matris üzerinde
öğrenci ortalaması 50 üzerinde olan kaç öğrenci olduğunu bulunuz. Ortalama değeri matris içinde olacaktır. 
*/
int main(){
    srand(time(NULL));
    int N,M,i,j,sayac=0;
    float toplam=0,ortalama=0;
    printf("N ogrenci sayisini giriniz:");
    scanf("%d",&N);
    printf("M ders sayisini giriniz:");
    scanf("%d",&M);
    int notlar[N][M];
    printf("         ortalama");
    for(i=0;i<N;i++){
        printf("\n");
        toplam=0;
        ortalama=0;
        for(j=0;j<M;j++){
            notlar[i][j]=rand()%101;
            printf("%d ",notlar[i][j]);
            toplam+=notlar[i][j];
        }
        ortalama=toplam/M;
        printf(" %.2f",ortalama);
        if(ortalama>=50){
            sayac++;
        }
    }
    printf("\n\n%d ogrencinin ortalamasi 50'nin uzerinde",sayac);
}