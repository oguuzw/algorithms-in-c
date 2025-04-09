#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
3. Parametre olarak girilen sayıdan küçük olan en büyük asal sayıyı bulan fonksiyonu yazınız.
 */
int asal_sayi_bul(int sayi){
    for(int i=sayi-1;i>=2;i--){
        bool asal_Mi=true;
        for(int j=2;j<(i/2);j++){
            if(i%j==0){
                asal_Mi=false;
                break;
            }
        }
        if(asal_Mi==true){
            return i;
        }
    }
}
int main(){
    int sayi;
    printf("sayi giriniz...");
    scanf("%d",&sayi);
    printf("%d den kucuk en buyuk asal sayi:%d",sayi,asal_sayi_bul(sayi));
}