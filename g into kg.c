#include<stdio.h>
int main()
{
    float grams,kg;
    printf("Enter weight in grams:");
    scanf("%f",&grams);
    kg=grams/1000;
    printf("Weight in kg = %.2f",kg);
    return 0;
}
