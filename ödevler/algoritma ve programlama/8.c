#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void matris_yaz(int N,char matris[N][N]){
    int i,j;
    for(i=0;i<N;i++){  
        for(j=0;j<N;j++){
            printf("%c ",matris[i][j]);           
        } 
        printf("\n");
    }
}

int main(){
    srand(time(NULL));
    int N;
    while(1){
        printf("\n6'dan buyuk N degeri giriniz...");
        scanf("%d",&N);
        if(N>6){
            break;
        }else{
            printf("\nN degeri 6'dan buyuk olmali.tekrar deneyiniz.;");
        }
    }
    char matris[N][N],matris2[N][N];
    char RCT[]="RCT";
    int i,j;
    printf("orijinal matris\n");
    for(i=0;i<N;i++){  //rastgele RCT harflerini atama
        for(j=0;j<N;j++){
            matris2[i][j]='_';
            matris[i][j]=RCT[rand()%3];
            if(matris[i][j]=='R'){
                if(matris[i-1][j]=='R' || matris[i-2][j]=='R' || matris[i-1][j-1]=='R' || matris[i-2][j-2]=='R'){
                    matris[i][j]=RCT[rand()%2+1];
                }
            }
            printf("%c ",matris[i][j]);
        }
        printf("\n");
    }

    int carpraz_react_kelimesi_sayac=0,L_react_kelimesi_sayac=0;
    for(i=0;i<=N-5;i++){
        for(j=0;j<=N-5;j++){
            if(matris[i][j]=='R'){
                if((matris[i+3][j+3]=='C' && matris[i+4][j+4]=='T')){  // carpraz(1.eksen)
                    matris[i+1][j+1]='_';
                    matris[i+2][j+2]='_';
                    matris2[i][j]='R';
                    matris2[i+1][j+1]='E';
                    matris2[i+2][j+2]='A';    
                    matris2[i+3][j+3]='C';
                    matris2[i+4][j+4]='T';
                    carpraz_react_kelimesi_sayac++;  
                }
            }
        } 
    }

    for(i=0;i<=N-2;i++){
        for(j=2;j<N;j++){
            if(matris[i][j]=='R'){
                if((matris[i+2][j-1]=='C' && matris[i+2][j-2]=='T')){  // ters L sekli(2.eksen)
                    matris[i+1][j]='_';
                    matris[i+2][j]='_';
                    matris2[i][j]='R';
                    matris2[i+1][j]='E';
                    matris2[i+2][j]='A';    
                    matris2[i+2][j-1]='C';
                    matris2[i+2][j-2]='T';
                    L_react_kelimesi_sayac++;
                }    
            }
        } 
    }

    printf("\n\n");
    matris_yaz(N,matris);  //matrisin bosluklu halini yazdir
   
    printf("\n\n");
    matris_yaz(N,matris2); 
    
    printf("\n%d kez 1.eksende(carpraz) react kelimesi tekrar etmistir.",carpraz_react_kelimesi_sayac);
    printf("\n%d kez 2.eksende(ters L) react kelimesi tekrar etmistir.",L_react_kelimesi_sayac);
}
