#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
ebob
*/
int obeb(int sayi1,int sayi2){
    int kucuk,buyuk;
    if(sayi1>sayi2){
        kucuk=sayi2;
        buyuk=sayi1;
    }else{
        kucuk=sayi1;
        buyuk=sayi2;
    }
    int ebob=1;
    for(int i=2;i<=kucuk;i++){
        if(buyuk%i==0 && kucuk%i==0){
            ebob=i;
        }
    }
    return ebob;
}
int main(){
    int sayi1,sayi2;
    printf("sayi1 gir");
    scanf("%d",&sayi1);
    printf("sayi2 gir");
    scanf("%d",&sayi2);
    printf("obeb:%d",obeb(sayi1,sayi2));
}