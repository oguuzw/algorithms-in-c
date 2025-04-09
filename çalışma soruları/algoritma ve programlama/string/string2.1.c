#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char metin[50];
    int n,karakter_sayisi;
    puts("metin giriniz");
    gets(metin);
    puts("en degeri giriniz");
    scanf("%d",&n);
    while(metin[karakter_sayisi]!='\0'){
        karakter_sayisi++;
    }
    printf("\nkaraktersayisi:%d ",karakter_sayisi);
    int baslangic=n-1,bitis=karakter_sayisi-n;
    while(1){
        if(metin[baslangic]==metin[bitis]){
            baslangic++;
            bitis--;
        }else{
            printf("palindrom degil");
            return 0;
        }
        if(baslangic==bitis){
            break;
        }
    }
    printf("palindromdur");
}