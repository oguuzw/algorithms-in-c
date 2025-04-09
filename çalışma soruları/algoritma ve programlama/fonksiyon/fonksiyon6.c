#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void degistirme(char metin[],char metinicindeki_degisen[],char yerine_gelen[]){
    for(int i=0;i<strlen(metin);i++){
        if(metin[i]==metinicindeki_degisen[0]){
            for(int j=1;j<strlen(metinicindeki_degisen);j++){
                if(metin[i+j]==metinicindeki_degisen[j]){
                    hepsi_sagliyor_Mu=true;
                }else{
                    hepsi_sagliyor_Mu=false;
                    break;
                }
            }
            
        }
    }
}
int main(){
    char metin[100],metinicindeki_degisen[10],yerine_gelen[10];
    puts("metin giriniz.");
    gets(metin);

    puts("metinicindeki_degisen giriniz");
    gets(metinicindeki_degisen);

    puts("yerine_gelen");
    gets(yerine_gelen);

}