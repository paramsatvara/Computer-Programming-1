#include<stdio.h>
int main()
{
    float dollars,rupees;
    printf("Enter amount in rupees:");
    scanf("%f",&rupees);
    dollars=rupees/48;
    printf("%.2f rupees = %.2f dollars\n",rupees,dollars);
    return 0;
}

