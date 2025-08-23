#include<stdio.h>
int main()
{
    float net,gross,allowance,deduction;
    printf("Enter Gross Salary :");
    scanf("%f",&gross);
    if(gross>10000)
    {
        allowance=0.1*gross;
        deduction=0.03*gross;

    }
    else if(gross>5000)
    {
        allowance=0.07*gross;
        deduction=0.02*gross;
        net=gross+allowance-deduction;
    }
    net=gross+allowance-deduction;
    printf("Net salary is %.2f",net);
    return 0;

}
