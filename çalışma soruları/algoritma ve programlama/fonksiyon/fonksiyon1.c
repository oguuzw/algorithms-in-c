#include <stdio.h>
#include <stdlib.h>
/*
1. Verilen bir int dizi içerisinden parametre olarak verilen elemanın kaçıncı sırada olduğunu bulan
(yoksa -1 döndüren) fonksiyonu yazınız. 
*/
int eleman_index_bul(int N,int dizi[],int aranan_sayi){
    for(int i=0;i<N;i++){
        if(aranan_sayi==dizi[i]){
            return i+1;
        }
    }
    return -1;
}
int main(){
    int dizi[]={1,2,5,12,20,50,4,30},aranan_sayi;
    int N=sizeof(dizi)/sizeof(int);
    printf("aradiginiz sayiyi yaziniz...");
    scanf("%d",&aranan_sayi);
    int sonuc=eleman_index_bul(N,dizi,aranan_sayi);
    if(sonuc==-1){
        printf("aranan sayi dizide yok");
    }else{
        printf("aranan sayi %d. sirada",sonuc);
    }
}