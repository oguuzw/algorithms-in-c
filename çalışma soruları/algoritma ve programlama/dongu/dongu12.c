#include <stdio.h>
int main()
{
    int sayi,i,j;
    printf("Lutfen sayi giriniz: ");
    scanf("%d",&sayi);
    for(i=1;i<=sayi;i++)
    {
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
  

}