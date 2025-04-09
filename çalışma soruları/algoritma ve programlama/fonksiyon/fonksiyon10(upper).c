#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
kucuk harfleri buyutme
*/
void upper(char string[]){
    int index=0;
    while(string[index]!='\0'){
        if(string[index]>='a' && string[index]<='z'){
            string[index]-=32;
        }
        index++;
    }
    puts(string);
}
int main(){
    char string[100];
    puts("string giriniz.");
    gets(string);
    upper(string);
}