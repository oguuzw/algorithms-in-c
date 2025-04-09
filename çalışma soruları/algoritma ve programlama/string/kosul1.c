#include <stdio.h>
int main()
{
    int tur,maas;
    printf("personel turu ve maas giriniz");
    scanf("%d%d",&tur,&maas);
    switch(tur)
    {
        case 1: maas=maas*1.5; break;
        case 2: maas=maas*1.3; break;
        case 3: maas=maas*1.2; break;
        case 4: maas=maas*1.1; break;
        default : printf("tur degeri 1-4 arasinda olmali");
    }
    printf("yeni maas %d",maas);
}