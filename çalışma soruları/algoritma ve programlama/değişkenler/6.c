#include <stdio.h>
int main()
{
    int vize1,vize2,final;
    float toplam;
    printf("birinci vize notunuzu giriniz:");
    scanf("%d",&vize1);
    printf("ikinci vize notunuzu giriniz:");
    scanf("%d",&vize2);
    printf("final notunu giriniz:");
    scanf("%d",&final);
    vize1=vize1*0.3;
    vize2=vize2*0.3;
    final=final*0.4;
    toplam=vize1+vize2+final;
    printf("notunuz = %.2f",toplam);

}