#include <stdio.h>
//int sayilar[]= { 1, 6, 5, 2, 1, 4, 2 }; 
//Yukarıdaki sayı dizisinde kullanıcı tarafından girilen sayıya denk gelen dizi içerisindeki 
//sayıların yerlerine -1 yerleştiren ve bu işlemi tüm dizideki elemanlar -1 olana kadar devam 
//ettiren ve böylece kaç farklı sayı olduğunu bulan program kodunu yazınız. 
int main()
{
    int dizi[7]={1,6,5,2,1,4,2},sayi,i,j;
    int sayac = 0, sayac2 = 0;

    while(sayac < (sizeof(dizi) / sizeof(int)))
    {
        int kontrol = 0;
        printf("sayi giriniz:");
        scanf("%d",&sayi);
        for(j=0;j<7;j++)
        {
            if(sayi==dizi[j])
            {
            dizi[j]=-1;
            sayac++;
            if(kontrol == 0){
                kontrol = 1;
                sayac2++;
            }
            }
        }
    }
    for(i=0;i<7;i++)
    { 
        printf("%d ",dizi[i]);
    }
    printf("farkli sayi = %d", sayac2);
}