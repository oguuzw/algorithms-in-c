#include <stdio.h>
#include <stdlib.h>
/*
5. Parametre olarak verilen bir string içindeki yine parametre olarak verilen karakter yerine yeni
karakterle değiştiren ve yeni stringi döndüren fonksiyonu yazınız. “MERHABA”, ‘A’, ‘X’, ’MERHXHX’
*/
void harf_degistirme(char metin[], char eski_karakter , char yeni_karakter){
    int i=0;
    while(metin[i]!='\0'){
        if(metin[i]==eski_karakter){
            metin[i]=yeni_karakter;
        }
        i++;
    }
    puts(metin);
}
int main(){
    char metin[100],eski_karakter,yeni_karakter;
    puts("metin giriniz.");
    gets(metin);

    puts("eski_karakter giriniz.");
    scanf(" %c",&eski_karakter);

    puts("yeni_karakter giriniz.");
    scanf(" %c",&yeni_karakter);
    
    harf_degistirme(metin,eski_karakter,yeni_karakter);
}