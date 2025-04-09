#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
ekok
*/
int ekok(int sayi1,int sayi2){
    int kucuk,buyuk;
    if(sayi1>sayi2){
        kucuk=sayi2;
        buyuk=sayi1;
    }else{
        kucuk=sayi1;
        buyuk=sayi2;
    }
    int ekok=buyuk;
    while(1){
        if(ekok%buyuk==0 && ekok%kucuk==0){
            break;
        }
        ekok++;
    }
    return ekok;
}
int main(){
    int sayi1,sayi2;
    printf("sayi1 gir");
    scanf("%d",&sayi1);
    printf("sayi2 gir");
    scanf("%d",&sayi2);
    printf("ekok:%d",ekok(sayi1,sayi2));
}