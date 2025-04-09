#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char metin[100];
    int i=0;
    puts("metin giriniz...");
    gets(metin);
    while(metin[i]!='\0'){
        i++;
    }

    for(int j=0;j<i;j++){
        if(j+1!=i){
            if(metin[j+1]>metin[j]){
                printf("%c>%c ,",metin[j+1],metin[j]);
            }
        }    
    }
}