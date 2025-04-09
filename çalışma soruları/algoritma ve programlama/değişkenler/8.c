#include <stdio.h>
main()
{
    int sayi,yuzler,onlar,carpion,carpiyuz;
    printf("sayi giriniz");
    scanf("%d",&sayi);
    yuzler=sayi/100;
    carpiyuz=yuzler*100;
    sayi=sayi-carpiyuz;
    printf("\nyuzler basamagi = %d",yuzler);
    onlar=sayi/10;
    carpion=onlar*10;
    sayi=sayi-carpion;
    printf("\nonlar basamagi = %d",onlar);
    printf("\nbirler basamagi= %d",sayi);



}