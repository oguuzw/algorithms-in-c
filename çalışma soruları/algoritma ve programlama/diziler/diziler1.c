#include <stdio.h>
/*Kullanıcı tarafından girilen n tane tam sayıdan pozitif ve negatif olarak farklı dizilerde 
gösteren program kodunu yazınız.  
Örnek: n:6 ise; Girilen sayılar: 1, -24, -2, 5, -5, 2 
Pozitif sayılar: 1, 5, 2  
Negatif sayılar: -24, -2, -5.*/
int main()
{
    int dizi[10],negatif[10],pozitif[10],i,sayi=0,j=0,k=0,n;
    printf("n degeri giriniz");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("sayi giriniz:");
        scanf("%d",&dizi[i]);
        if(dizi[i]<0)
        {
            negatif[j]=dizi[i];
            j++;
        }
        else if(dizi[i]==0)
        {
            continue;
        }
        else
        {
            pozitif[k]=dizi[i];
            k++;
        }
    }
    printf("\ngirilen sayilar:");
    for(i=0;i<n;i++)
    {
        printf("%d ",dizi[i]);
    }
    printf("\nnegatif sayilar:");
    for(i=0;i<j;i++)
    {
        printf("%d ",negatif[i]);
    }
    printf("\npozitif sayilar:");   
    for(i=0;i<k;i++)
    {
        printf("%d ",pozitif[i]);
    }
}