#include<stdio.h>
int main()
{
    float P,R,N,I;
    printf("Enter principal amount(in Rs) :");
    scanf("%f",&P);
    printf("Enter Rate of Interest :");
    scanf("%f",&R);
    printf("Enter time(in years) :");
    scanf("%f",&N);
    I=(P*R*N)/100;
    printf("Interest = %.2f Rupees",I);
    return 0;
}
