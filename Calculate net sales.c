#include<stdio.h>
int main()
{
    float net,gross;
    printf("Enter gross sales :");
    scanf("%f",&gross);
    net=gross-(0.1*gross);
    printf("Net sales = %.2f",net);
    return 0;
}
