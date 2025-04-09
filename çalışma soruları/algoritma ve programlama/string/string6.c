#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
6. Kullanıcı tarafından girilen bir string dizisini yine kullanıcının belirtmiş olduğu n. elemandan itibaren kesen ve
bu oluşan yeni iki stringi iki ayrı string dizisine gönderiniz.
*/
int main(){
    char metin[100],str1[100],str2[100];
    int n,i=0,j=0,k=0;
    printf("metin giriniz:");
    gets(metin);
    printf("n degeri giriniz");
    scanf("%d",&n);
    while(metin[i]!='\0'){
        if(i<n){
            str1[j++]=metin[i];
        }else{
            str2[k++]=metin[i];
        }
        i++;
    }
    str1[j]='\0';
    str2[k]='\0';
    j=0;
    k=0;
    printf("str1:");
    while(str1[j]!='\0'){
        printf("%c",str1[j++]);
    }
    printf("\t");
    printf("str2:");
    while(str2[k]!='\0'){
        printf("%c",str2[k++]);
    }
}