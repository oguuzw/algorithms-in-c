#include <stdio.h>
//2-Kullanıcı tarafından -1 girilene kadar girilen tam sayılardan 
//sadece pozitif sayıları diziye 
//alan ve ortalamasını bulan program kodunu yazınız. 
int main()
{
    int pozitif[50],sayi,pozitifsayac=0;
    double toplam=0,ort=0;
    do
    {
        printf("tam sayi giriniz.(cikmak icin -1 basiniz.)");
        scanf("%d",&sayi);
        if(sayi>0)
        {
            pozitif[pozitifsayac]=sayi;
            toplam+=pozitif[pozitifsayac];
            pozitifsayac++;
        }
    }while(sayi!=-1);
    ort=toplam/pozitifsayac;
    printf("ortalama: %.2lf",ort);
}