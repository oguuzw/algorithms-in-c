#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char metin[100],matris[10][10];
    int karakter_sayisi=0;
    puts("metin giriniz kelimeler arasina _ koyunuz");
    gets(metin);
    while(metin[karakter_sayisi]!='\0'){
        karakter_sayisi++;
    }
    
    int satir=0,sutun=0,kelime_sayac=1;
    for(int j=0;j<karakter_sayisi;j++){
        if(metin[j]=='_'){
            kelime_sayac++;
            matris[satir++][sutun]='\0';
            sutun=0;
            continue;
        }
        matris[satir][sutun++]=metin[j];
    }
    int kelime_sayac2=1;
    int satir2=0,sutun2=0;
    for(int i=0;i<=karakter_sayisi-kelime_sayac;i++){
        if(matris[satir2][sutun2]=='\0'){
            satir2++;
            sutun2=0;
            printf("\n");
        }
        printf("%c",matris[satir2][sutun2++]);
    }
}