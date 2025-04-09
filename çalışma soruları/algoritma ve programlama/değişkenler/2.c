#include <stdio.h>
int main()
{
    double sayi1,sayi2,sayi3,toplam,ortalama;
    printf("3 sayi giriniz\n");
    scanf("%lf",&sayi1);
    scanf("%lf",&sayi2);
    scanf("%lf",&sayi3);
    toplam=sayi1+sayi2+sayi3;
    ortalama=toplam/3;
    printf("\nortalama= %.2lf",ortalama);  //  %.sayı yüzdeden hemen sonra nokta sayı ile noktadan sonraki basamak sayısını ayarlayabiriz


}