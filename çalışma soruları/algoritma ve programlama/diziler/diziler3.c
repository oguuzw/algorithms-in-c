#include <stdio.h>
//3- 10 sayısından büyük tek ve 3’e tam bölünen ilk 5 adet tam sayıyı
// diziye alan ve büyükten küçüğe yazdıran program kodunu yazınız. 
int main()
{
    int i,j=0,dizi[5];
    for(i=10;i<100;i++)
    {
        if(i%2==1 && i%3==0)
        {
            dizi[j]=i;
            j++;
        }
        if(j==5) break;
    }
    for(i=4;i>=0;i--)
    {
        printf("\n%d.sayi:%d",i+1,dizi[i]);
    }
    
}