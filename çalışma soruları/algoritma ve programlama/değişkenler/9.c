#include <stdio.h>
main()
{
    float F,m1,m2,r;
    const float G=0.865;
    
    printf("ilk kutle degerini giriniz:");
    scanf("%f",&m1);
    printf("ikinci kutle degerini giriniz:");
    scanf("%f",&m2);
    printf("yaricap degerini giriniz:");
    scanf("%f",&r);
    F=(G*m1*m2)/(r*r);
    printf("kuvvet degeri = %.3f",F);
}