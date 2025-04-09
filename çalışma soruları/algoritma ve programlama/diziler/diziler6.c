#include <stdio.h>
//6-sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 }; 
//Yukarıdaki sayı dizisinde yan yana kaç tane çift sayı ikilisi olduğunu bulan program 
//kodunu yazınız. 20-60, 24-26, 50-30,  30-40 şeklinde 4 adet olarak ekrana yazdırılacaktır. 
int main()
{
    int dizi[]={20,60,45,42,23,24,26,125,66,55,145,50,30,40},i=0;
    for(i=0;i<13;i++)
    {
        if(dizi[i]%2==0 && dizi[i+1]%2==0)
        {
            printf(" %d-%d ",dizi[i],dizi[i+1]);
        }
    }
}