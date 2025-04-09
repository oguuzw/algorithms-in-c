#include <stdio.h>
#include <stdbool.h>
int ortak_bolen(int x,int y){
    int i,kucuk,ortakbolen=0;
    if(x<y){
        kucuk=x;
    }
    else{
        kucuk=y;
    }
    for(i=2;i<=kucuk;i++){
        if(x%i==0 && y%i==0){
            ortakbolen++;
        }
    }
    return ortakbolen;
}
int main()
{
    int x=0,dizi[]={2,3,5,10,11,29,13,15,17};
    int dizi_boyutu=sizeof(dizi)/sizeof(int);
    int i,j,k,l;
    int serisayac=0,seriuzunlugu=1,enuzunseriuzunlugu=0;
    int mevcut_seri[dizi_boyutu],enuzun_seri[dizi_boyutu];
    bool serisonlandi=false,seriye_eklenebilirMi=true;
    mevcut_seri[serisayac++]=dizi[0];  //mevcut_seriye ilk degeri atama
    
    for(i=1;i<dizi_boyutu;i++){
        for(j=0;j<serisayac;j++){     //mevcut serinin icindeki elemanlari kontrol eder      
            if(ortak_bolen(dizi[i],mevcut_seri[j])==x){               
                seriye_eklenebilirMi=true;                                           
            }
            else{
                seriye_eklenebilirMi=false;
                serisonlandi=true;
                break;
            }
        }
        if(serisonlandi==false){
            if(seriye_eklenebilirMi==true){
            mevcut_seri[serisayac]=dizi[i];
            seriuzunlugu=serisayac+1;
            serisayac++;
            }
            else if(seriye_eklenebilirMi==false){
            serisonlandi==true;
            }
        }
        else if(serisonlandi==true){
            if(seriuzunlugu>=enuzunseriuzunlugu){  //en uzun seri 
                enuzunseriuzunlugu=seriuzunlugu;
                serisayac=0;
                seriuzunlugu=0;
                for(k=0;k<enuzunseriuzunlugu;k++){  //en uzun seriye degerleri atama
                    enuzun_seri[k]=mevcut_seri[k];
                }
            }
            serisayac=0;
            seriuzunlugu=0;
            serisonlandi=false;
            mevcut_seri[serisayac]=dizi[i];
            seriuzunlugu=serisayac+1;
            serisayac++;    
        }
    }
    if(enuzunseriuzunlugu==1){
        printf("sonuc: dizi bos\nseri uzunlugu:0");
    }
    else{
        printf("sonuc:");
        for(l=0;l<enuzunseriuzunlugu;l++){
            printf("%d  ",enuzun_seri[l]);
        }
        printf("\nseri uzunlugu:%d",enuzunseriuzunlugu);
    }
    return 0;
}
