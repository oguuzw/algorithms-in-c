#include <stdio.h>
//7- sayilar[]= { 20,60,45,42,23,24,26,125,66,55,145,50,30,40 }; 
//Yukarıdaki sayı dizisinde çift sayıları tek sayıya 
//(kendinden bir sonraki sayıya) çeviren 
//program kodunu yazınız. 20->21, 60->61 şeklinde olacaktır. 
int main()
{
    int i,dizi[14]={20,60,45,42,23,24,26,125,66,55,145,50,30,40};
    for(i=0;i<14;i++)
    {
        if(dizi[i]%2==0)
        {
            dizi[i]+=1;
        }
        printf("\n%d.sayi%d",i+1,dizi[i]);
    }
}