#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
3. Kullanıcı tarafından girilen string ifadede her kelime ‘_’ ile ayrılmış olup bu string ifadenin kaç kelimeden
oluştuğunu bulunuz
Örnek: “ali_veli_sami_sukru” Sonuc: 4 olacaktır.
*/
int main(){
    char metin[100];
    int i=0,bosluk_sayac=0;
    puts("metin giriniz");
    gets(metin);
    while(metin[i]!='\0'){
        if(metin[i]==' '){
            metin[i]='_';
            bosluk_sayac++;
        }
        i++;
    }
    int j=0;
    while(metin[j]!='\0'){
        printf("%c",metin[j++]);
    }
    printf("\tsonuc:%d",bosluk_sayac+1);
}