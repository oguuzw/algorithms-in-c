#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char metin[100];
    int karakter_sayisi;
    puts("metin giriniz iki kelime arasina _ koyunuz");
    gets(metin);
    while(metin[karakter_sayisi]!='\0'){
        karakter_sayisi++;
    }
    int kelime_sayac=1;
    for(int i=0;i<karakter_sayisi;i++){
        if(metin[i]=='_'){
            kelime_sayac++;
        }
    }
    printf("%d kelime var.",kelime_sayac);
}