#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
SUBSTRING(char[] string, int baslangicIndex, int uzunluk) : “yazilimcilar”, 3, 4 => sonuç: “ilim”
*/
void substring(char metin[],int baslangic_index,int uzunluk){
    int sonuc[100];
    for(int i=0;i<=uzunluk;i++){
        if(i==uzunluk){
            sonuc[i]='\0';
        }else{
            sonuc[i]=metin[baslangic_index++];
        }    
    }
    int sayac=0;
    while(sonuc[sayac]!='\0'){
        printf("%c",sonuc[sayac++]);
    }
}
int main(){
    char metin[100];
    int baslangic_index,uzunluk;
    puts("metin giriniz");
    gets(metin);
    printf("baslangic_index giriniz.");
    scanf(" %d",&baslangic_index);
    printf("uzunluk giriniz");
    scanf(" %d",&uzunluk);
    substring(metin,baslangic_index,uzunluk);
}