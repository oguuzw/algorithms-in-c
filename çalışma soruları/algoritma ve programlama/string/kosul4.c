#include <stdio.h>
int main()
{
    int sayi1,sayi2;
    printf("2 sayi giriniz...");
    scanf("%d%d",&sayi1,&sayi2);
    if(sayi1==3*sayi2)   printf("uc katidir");
    else if(sayi2==3*sayi1)  printf("uc katidir");
    else printf("uc kati degil");
}