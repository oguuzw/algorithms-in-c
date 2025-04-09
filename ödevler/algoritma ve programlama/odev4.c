#include <stdio.h>
int main()
{
    int sayi,abca,ab,i,a,b,c,d,j,sonuc,basamak;
    int ebob;
    int dsayaci,k=0;
    int toplam=0;

    for(i=1000;i<=9999;i+=10)   //4 basamakli sayilar
    {
        sayi=i;
        ab=sayi/100;
        a=sayi/1000;
        b=(sayi%1000)/100;
        c=(sayi%100)/10;
        d=(sayi*ab)%10;
        abca=(1000*a+100*b+10*c+a);
       
        
        for(j=2;j<=ab;j++)   //kucuk olan sayiya kadar ebobu bulmak icin
        {
               
            if(abca%j==0 && ab%j==0)
            {
                ebob=j;
                break;
            }
            else
            {
                ebob=1;        //ebob 1 ise aralarinda asal          
            }
                                             
        }  
            if(ebob==1)
            {
                sonuc=1;
                sonuc=abca*ab;
                d=sonuc%10;
                dsayaci=0;        //her yeni sayida dsayaci sifirlanir
                while(sonuc>0)    //sayinin basamaklarini bulup onun d sayisina esitligini kontrol 
                {                   
                    basamak=sonuc%10;
                    sonuc/=10;
                    if(basamak==d)
                    {
                        dsayaci++;                   
                        if(dsayaci>=3)
                        {
                            if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) 
                            {
                            k++;    //k sayaci kacinci sayi oldugunu sayar
                            toplam+=(abca*ab);                        
                            printf("\n%d.sayi:ABCA:%d  AB:%d sonuc:%d",k,abca,ab,(abca*ab));                             
                            }       
                        }                         
                    }                                 
                }
            }            
    }
    printf("\n toplam:%d",toplam);
}
