#include <stdio.h>
#include <stdlib.h>
int main(){
    char metin[50],ters_metin[50];
    puts("metin giriniz");
    gets(metin);
    int harf_sayac=0;
    while(metin[harf_sayac]!='\0'){
        harf_sayac++;
    }
    int j=0;
    for(int i=harf_sayac-1;i>=0;i--){
        ters_metin[j++]=metin[i];
    }
    puts(ters_metin);
}