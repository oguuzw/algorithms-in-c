#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
4. Kullanıcı tarafından girilen iki string ifadeyi karşılaştıran ve (küçük, büyük veya eşit şeklinde) sonuç
döndürünüz.
*/
int main(){
    char str1[100],str2[100];
    int i=0,j=0,toplam1=0,toplam2=0;
    printf("birinci stringi girin:");
    gets(str1);
    printf("ikinci stringi girin:");
    gets(str2);
    while(str1[i]!='\0'){
        toplam1+=str1[i++];
    }
    while(str2[j]!='\0'){
        toplam2+=str2[j++];
    }
    if(toplam1>toplam2){
        printf("str1 buyuktur str2 den");
    }else if(toplam1<toplam2){
        printf("str1 kucuktur str2 den");
    }else{
        printf("ESIT");
    }

}