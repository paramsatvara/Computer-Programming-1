#include<stdio.h>
int main()
{
    float net,gross,discount;
    printf("Enter gross sales : ");
    scanf("%f",&gross);
    if(gross>20000)
    {
        discount=0.15*gross;
    }
    else if(gross>10000)
    {
        discount=0.1*gross;
    }
    else if(gross<=10000)
    {
        discount=0.05*gross;
    }
    net=gross-discount;
    printf("Net sales is %.2f",net);
    return 0;
}
