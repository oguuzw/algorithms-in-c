#include <stdio.h>
int main()
{
    float kelvin,fahrenheit;
    printf("kelvin degeri giriniz:");
    scanf("%f",&kelvin);
    fahrenheit=(kelvin-273.15)*9/5 + 32;
    printf("fahrenheit degeri =%.2f",fahrenheit);


    return 0;
}
