#include <stdio.h>
//5- int sayilar[] = { 10,15,20,33,22,11,9,8,48,47,12,25,12,21 };  
//Yukarıda verilen tam sayı dizisinde sayının baştan kaçıncı sırada olduğunu bulan 
//(yoksa “Bu sayı dizide bulunmamaktadır” yazdırılacaktır) program kodunu yazınız. 
int main()
{
    int i,sayi,sayilar[14]={ 10,15,20,33,22,11,9,8,48,47,12,25,12,21},varmi=0;
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    for(i=0;i<14;i++)
    {
        if(sayi==sayilar[i])
        {
            printf("\nsayi bastan %d. sirada",i+1);
            varmi=1;
        }  
    }
    if(varmi==0)
    {
    printf("bu sayi dizide bulunmamaktadir");
    }
}