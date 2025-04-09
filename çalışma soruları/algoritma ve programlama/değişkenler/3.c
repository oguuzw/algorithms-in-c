#include <stdio.h>
int main()
{
    float a,b,c;
    printf("a degeri giriniz");
    scanf("%f",&a);
    printf("\nb degeri giriniz");
    scanf("%f",&b);
    printf("\nc degeri giriniz");
    scanf("%f",&c);
    float y1;
    y1=(3*a*a+2*b*b*b+c*c*c*c)/6;
    
    printf("\ny degeri = %.2f",y1);

    return 0;
}