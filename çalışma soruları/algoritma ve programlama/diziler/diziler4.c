#include <stdio.h>
//4- 100 sayısından küçük çift ve 3’e bölünmeyen ilk 10 adet tam sayıyı diziye 
//alan ve küçükten büyüğe yazdıran program kodunu yazınız. 
int main()
{
    int i,j=9,dizi[10];
    for(i=99;i>=0;i--)
    {
        if(i%2==0 && i%3!=0)
        {
            dizi[j]=i;
            j--;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("\n%d.sayi:%d",i+1,dizi[i]);
    }
}