#include<stdio.h>
int main()
{
    float grams,kg;
    printf("Enter weight in kg:");
    scanf("%f",&kg);
    grams=kg*1000;
    printf("Weight in grams = %.2f",grams);
    return 0;
}

