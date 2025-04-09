#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char metin[100],str1[100],str2[100];
    int i=0,n;
    puts("metin giriniz...");
    gets(metin);
    puts("n degeri giriniz.");
    scanf("%d",&n);
    while(metin[i]!='\0'){
        i++;
    }
    int sayac1=0,sayac2=0;
    for(int j=0;j<i;j++){
        if(j<n-1){
            str1[sayac1++]=metin[j];
        }else{
            str2[sayac2++]=metin[j];
        } 
    }
    str1[sayac1]='\0';
    str2[sayac2]='\0';
    puts(str1);
    puts(str2);
}