#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    int N=0,i=0,j,k,l=0,konum_deger_ortak=1,ikilik_us=16,sayi=0;
    int sayi_index=1,sayac=0;
    while(1){
        N=(rand()%11)+10;
        if(N%2==0){
            break;
        }
    }
    int dizi[6*N];

    while(i<(6*N)){
        while(i<6*N){
            if(i%6==0){   //mod(6) olan yerlere sayilar gelecek 
                i++;
            }else{
                dizi[i++]=rand()%2;
            }
            if(i%12==0){
                break;
            }
        }
        for(j=i-12;j<(i-8);j++){
            if(dizi[j+1]==dizi[j+7] && dizi[j+2]==dizi[j+8]){  
                konum_deger_ortak++;
            }
        }
        if(konum_deger_ortak>=2){
            dizi[i-12]=sayi_index++;  //mod(6) olan yerlerin index atamasi
            dizi[i-6]=sayi_index++;
            konum_deger_ortak=1;
        }else{
            i-=12;  //sartlar saglanmazsa tekrar sayi atamasi icin
            continue;
        }       
    }
    printf("N:%d ise;\n",N);
    for(k=0;k<(6*N);k++){  //bitleri ve sayilarin indexini yazdirma
        if(k%6==0){
            printf("||%d.sayi ",dizi[k]);
        }else{
            printf("%d ",dizi[k]);
        }
    }
    printf("\n\n");
    while(l<(6*N)){  //onluk sisteme cevirme
        if(l%6==0){
            l++;
        }
        sayi+=(ikilik_us*dizi[l++]);
        ikilik_us/=2;
        if(l%6==0){
            sayac++;
            printf("\n%d.sayi:%d",sayac,sayi);
            sayi=0;
            ikilik_us=16;
        }
    }
    return 0;
}
