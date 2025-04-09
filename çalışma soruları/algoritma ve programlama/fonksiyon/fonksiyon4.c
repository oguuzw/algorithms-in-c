#include <stdio.h>
#include <stdlib.h>
/*
4. Parametre olarak char dizisi ve bir adet char elemanı alan ve bu dizi içinde
*/
int sondan_aranan_harf(char metin[],char aranan_harf,int boyut){
    for(int i=boyut;i>=0;i--){
        if(metin[i]==aranan_harf){
            return (boyut-i);
        }
    }
    return -1;
}
int main(){
    char metin[100],aranan_harf;
    puts("metin giriniz.");
    gets(metin);
    int boyut=strlen(metin);
    puts("hangi harfi ariyorsunuz?");
    scanf("%c",&aranan_harf);
    if(sondan_aranan_harf(metin,aranan_harf,boyut)==-1){
        printf("bu harf yoktur");
    }else{
        printf("aranan harf sondan %d. sirada",sondan_aranan_harf(metin,aranan_harf,boyut));
    }
}