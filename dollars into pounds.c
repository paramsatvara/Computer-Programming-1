#include<stdio.h>
int main()
{
    float dollars,pounds,rupees;
    printf("Enter amount in dollars:");
    scanf("%f",&dollars);
    rupees=dollars*48;
    pounds=rupees/70;

    printf("%.2f dollars = %.2f pounds\n",dollars,pounds);
    return 0;
}


