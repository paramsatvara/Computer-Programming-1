#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter temperature into fahrenheit :");
    scanf("%f",&F);
    C=0.56*(F-32);
    printf("Temperature in Celcius = %.2f",C);
    return 0;
}

