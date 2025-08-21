#include<stdio.h>
int main()
{
    float length,breadth,Area,Perimeter;
    printf("Enter length of square in cm :");
    scanf("%f",&length);
    printf("Enter breadth of square in cm :");
    scanf("%f",&breadth);

    Area=length*breadth;
    Perimeter=2*(length+breadth);
    printf("Area and Perimeter of rectangle are %.2fcm^2 and %.2fcm respectively",Area,Perimeter);
    return 0;
}

