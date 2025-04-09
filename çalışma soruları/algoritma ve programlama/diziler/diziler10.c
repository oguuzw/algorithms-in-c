#include <stdio.h>
//10. int matris[10][10]; şeklinde tanımlanan bir matris içerisine 7’e tam bölünen 100 adet 
//pozitif tam sayıyı yerleştiren ve büyükten küçüğe yazdıran program kodunu yazınız. 
int main()
{
    int dizi[10][10],i,j,x=0;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            dizi[i][j]=x;
            x+=7;
        }
    }
    dizi[0][0]=1;
    for(i=9;i>=0;i--)
    {
        for(j=9;j>=0;j--)
        {
            printf("%d ",dizi[i][j]);
        }
        printf("\n");
    }
}