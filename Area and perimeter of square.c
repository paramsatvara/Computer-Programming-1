#include<stdio.h>
int main()
{
    float length,Area,Perimeter;
    printf("Enter length of square in cm :");
    scanf("%f",&length);
    Area=length*length;
    Perimeter=4*length;
    printf("Area and Perimeter of square are %.2fcm^2 and %.2fcm respectively",Area,Perimeter);
    return 0;
}
