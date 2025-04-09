#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
bool satir_sutun_kontrolu(int matris[9][9],int satir,int sutun,int sayi){ //satir sutun ve 3x3 kontrolu
    int k;
    for(k=0;k<9;k++){
        if(matris[satir][k]==sayi || matris[k][sutun]==sayi){
            return false;
        }
    }

    int i,j;
    int baslangic_i=(satir/3)*3;
    int baslangic_j=(sutun/3)*3;
    for(i=baslangic_i;i<(baslangic_i+3);i++){
        for(j=baslangic_j;j<(baslangic_j+3);j++){
            if(matris[i][j]==sayi){
                return false;
            }
        }
    }
    return true;
}

void matrisi_yaz(int matris[9][9]){
    int i,j;
    printf("\n");
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){ 
            if(matris[i][j]==0){
                printf(". ");
            }else{          
                printf("%d ",matris[i][j]);
            }    
            if((j+1)%3==0){
                printf(" ");
            }             
        }
        if((i+1)%3==0){
            printf("\n");
        } 
        printf("\n");
    }
}

int main(){
    srand(time(NULL));
    int matris[9][9],seksenbir_sayi,kullanici_sayi,otuzsayi_sayac=0;
    int i=0,j=0,k,l,m,n;
    int random_sayi;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            matris[i][j]=0;  //her yere 0 yerlestime
        }
    }
    while(otuzsayi_sayac<30){  //random yerlere random 30 tane sayi yerlestirme
        i=rand()%9;
        j=rand()%9;
        random_sayi=(rand()%9)+1;
        if(satir_sutun_kontrolu(matris,i,j,random_sayi)==true){
            matris[i][j]=random_sayi;
            otuzsayi_sayac++;
        }
    }

    int kimin_sirasi=0; //cift ise bilgisayar tek ise bizim
    while(kimin_sirasi<10){
        if(kimin_sirasi%2==0){  //bilgisayar
            int yerlestiMi=false;
            while(yerlestiMi==false){
                i=rand()%9;
                j=rand()%9;
                random_sayi=(rand()%9)+1;
                if(matris[i][j]==0 && satir_sutun_kontrolu(matris,i,j,random_sayi)==true){
                    kimin_sirasi++;
                    yerlestiMi=true;
                    printf("\nbilgisayar %d.secimi yapti sira sizde...",kimin_sirasi);
                    matrisi_yaz(matris);
                }
            }       
        }else{ //biz
            int yerlestiMi=false;
            while(yerlestiMi==false){
                printf("\n(1-81)arasinda bir kutu belirleyiniz:");
                scanf("%d",&seksenbir_sayi);
                printf("\nkutu icin (1-9) arasinda bir sayi belirleyiniz:");
                scanf("%d",&kullanici_sayi);
                if(seksenbir_sayi>=1 && seksenbir_sayi<=81 && kullanici_sayi>=1 && kullanici_sayi<=9){
                    i=(seksenbir_sayi-1)/9;
                    j=(seksenbir_sayi-1)%9;
                    if(matris[i][j]==0 && satir_sutun_kontrolu(matris,i,j,kullanici_sayi)==true){                                                
                        matris[i][j]=kullanici_sayi;
                        kimin_sirasi++;
                        yerlestiMi=true;
                        printf("\n%d.yerlestirme basarili...",kimin_sirasi);
                    }else{
                        printf("\nyerlestirme basarisiz TEKRAR DENEYINIZ...");
                    }    
                }else{
                    printf("\ngirilen degerler hatali tekrar deneyiniz...");
                }
            }
        }
    }    
    matrisi_yaz(matris); 
}
