#include <stdio.h>
//3. 10 sayısından büyük tek ve 3’e tam bölünen ilk 5 adet tam sayıyı diziye alan ve büyükten 
//küçüğe yazdıran program kodunu yazınız.
int main()
{
    int dizi[5],i=0,j=10;
    while(i!=5)
    {
        if(j%2==1 && j%3==0)
        {
            dizi[i]=j;
            i++;
        }
        j++;
    }
    for(i=4;i>=0;i--)
    {
        printf("\n%d",dizi[i]);
    }
}