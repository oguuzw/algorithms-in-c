#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
ters cevirme
*/
void reverse(char string[]){
   char ters_string[100];
   int index=0;
   int boyut=strlen(string);
   for(int i=boyut;i>=0;i--){
        if(i==0){
            ters_string[index]='\0';
        }else{
            ters_string[index++]=string[i-1];
        }    
   }
   puts(ters_string);
}
int main(){
    char string[100];
    puts("string giriniz.");
    gets(string);
    reverse(string);
}