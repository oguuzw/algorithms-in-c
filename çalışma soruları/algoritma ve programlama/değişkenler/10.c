#include <stdio.h>
main()
{
    int sayi;
    printf("5 basamakli sayi giriniz:");
    scanf("%d",&sayi);
    int onbinlerbasamagi=sayi/10000;
    int onbinler=onbinlerbasamagi*10000;
    int binler=sayi-onbinler;
    int binlerbasamagi=binler/1000;
    int binlersayi=binlerbasamagi*1000;
    int yuzler=binler-binlersayi;
    int yuzlerbasamagi=yuzler/100;
    int yuzlersayi=yuzlerbasamagi*100;
    int onlar=yuzler-yuzlersayi;
    int onlarbasamak=onlar/10;
    int onlarsayi=onlarbasamak*10;
    int birler=onlar-onlarsayi;

    printf("%d",onbinler);
    printf("\n%d",binlersayi);
    printf("\n%d",yuzlersayi);
    printf("\n%d",onlarsayi);
    printf("\n%d",birler);


}