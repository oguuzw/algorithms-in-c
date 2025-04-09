#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
2. Kullanıcı tarafından girilen string ifade içinde yine kullanıcı tarafından girilen n. elamandan başlamak ve
sonlandırmak üzere girilen string ifadenin n sayısına göre palindrom olup olmadığını bulunuz.
*/
int main(){
    char metin[100];
    int n,karakter_sayisi=0;
    puts("metin giriniz:");
    gets(metin);
    printf("n sayisi giriniz:");
    scanf("%d",&n);
    while(metin[karakter_sayisi]!='\0'){
        karakter_sayisi++;
    }
    int baslangic_kontrol=(n-1);
    int bitis_kontrol=(karakter_sayisi-n);
    while(1){
        if(metin[baslangic_kontrol]!=metin[bitis_kontrol]){
            printf("\npalindrom degildir.");
            return 0;
        }else{
            baslangic_kontrol++;
            bitis_kontrol--;
            if(baslangic_kontrol==bitis_kontrol){
                break;
            }
        }
    }
    printf("palindrom metin");
}