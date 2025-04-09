#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
7. Kullanici tarafından girilen string ifadede her kelime ‘_’ ile ayrılmış olup bu string ifadeden olusan kelimeleri
bir matris yapisina gonderiniz.
*/
int main(){
    char metin[100],matris[100][100];
    printf("metin giriniz(bosluk yerine _ kullaniniz)");
    gets(metin);
    int i=0,j=0,k=0;
    while(metin[i]!='\0'){
        if(metin[i]=='_'){
            matris[j][k]='\0';
            j++;
            k=0;
        }else{
            matris[j][k++]=metin[i];
        }   
        i++;      
    }
    matris[j][k]='\0';
    int l=0,m=0,f=0;
    for(f=0;f<i;f++){
       if(matris[l][m]=='\0'){
            printf("\n");
            l++;
            m=0;
       }else{
            printf("%c",matris[l][m++]);
       }
    }
}