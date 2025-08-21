#include<stdio.h>
int main()
{
    float R,Area;
    printf("Enter radius of circle(in cm) :");
    scanf("%f",&R);
    Area=3.14*R*R;
    printf("Area of circle = %.2fcm^2",Area);
    return 0;
}
