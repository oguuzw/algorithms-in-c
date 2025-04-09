#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Bir metinde baştan sona (bir sonraki > bir önceki) kaç tane kendisinden büyük karakter olduğunu bulunuz.
Örnek: “abcdezmf” Sonuc: b>a, c>b, d>c, e>d, z>e şeklinde 5 adet bu kurala uygun karakter dizisi vadır.
*/
int main(){
    char metin[100],sonuc[100];
    int i=0,j=0;
    printf("metin giriniz:");
    gets(metin);
    while(metin[i]!='\0' && metin[i+1]!='\0'){
        if(metin[i]<metin[i+1]){
            sonuc[j++]=metin[i];
            sonuc[j++]=metin[i+1];
        }
        i++;
    }
    sonuc[j]='\0';
    int k=0;
    while(sonuc[k]!='\0'){
        printf("%c>%c, ",sonuc[k++],sonuc[k++]);
    }
}