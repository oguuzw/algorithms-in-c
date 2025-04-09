#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
1. Kullanıcı tarafından girilen string ifadeyi ters çevirip yeni bir diziye yerleştiriniz.
*/
int main(){
    char metin[100],ters_metin[100];
    int i=0,k=0;
    puts("metin giriniz...");
    gets(metin);
    while(metin[i]!='\0'){
        i++;
    }
    for(int j=(i-1);j>=0;j--){
        ters_metin[k++]=metin[j];
    }
    for(int l=0;l<k;l++){
        printf("%c",ters_metin[l]);
    }
    printf("\n");
}