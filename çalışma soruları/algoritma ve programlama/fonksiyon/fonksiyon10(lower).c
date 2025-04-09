#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
buyuk harfleri kucultme
*/
void lower(char string[]){
    int index=0;
    while(string[index]!='\0'){
        if(string[index]>='A' && string[index]<='Z'){
            string[index]+=32;
        }
        index++;
    }
    puts(string);
}
int main(){
    char string[100];
    puts("string giriniz.");
    gets(string);
    lower(string);
}