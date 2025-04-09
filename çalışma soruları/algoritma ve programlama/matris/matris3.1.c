#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int faktoriyel=1,matris[4][10];
    for(int i=0;i<4;i++){
        for(int j=0;j<10;j++){
            if(i==0){
                matris[i][j]=j+1;
            }else if(i==1){
                matris[i][j]=(j+1)*(j+1);
            }else if(i==2){
                faktoriyel*=j+1;
                matris[i][j]=faktoriyel;
            }else{
                int uslu_sayi=1;
                for(int k=1;k<=(j+1);k++){
                    uslu_sayi*=(j+1);
                }
                matris[i][j]=uslu_sayi;
            }
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<10;j++){
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
}