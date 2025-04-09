#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char str1[50],str2[50];
    int karakter_sayisi1=0,karakter_sayisi2=0;
    puts("ilk stringi giriniz.");
    gets(str1);
    puts("ikinci stringi giriniz.");
    gets(str2);
    while(str1[karakter_sayisi1]!='\0'){
        karakter_sayisi1++;
    }
    while(str2[karakter_sayisi2]!='\0'){
        karakter_sayisi2++;
    }

    int toplam1=0,toplam2;
    for(int i=0;i<karakter_sayisi1;i++){
        toplam1+=str1[i];
    }
    for(int i=0;i<karakter_sayisi2;i++){
        toplam2+=str2[i];
    }

    printf("str1:%d  str2:%d\n",toplam1,toplam2);

    if(toplam1>toplam2){
        printf("birinci string daha buyuktur");
    }else if(toplam1<toplam2){
        printf("ikinci string daha buyuktur");
    }else{
        printf("birbirine esit");
    }
}