#include<stdio.h>
int main()
{
    float H,B,Area;
    printf("Enter height(in cm) :");
    scanf("%f",&H);
    printf("Enter base(in cm) :");
    scanf("%f",&B);
    Area=H*B/2;
    printf("Area of triangle = %.2fcm^c",Area);
    return 0;
}
