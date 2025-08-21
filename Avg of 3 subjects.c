#include<stdio.h>
int main()
{
    float p,c,m,Avg,total;
    printf("Enter Phy marks :");
    scanf("%f",&p);
    printf("Enter Chem marks :");
    scanf("%f",&c);
    printf("Enter Maths marks :");
    scanf("%f",&m);
    Avg=(p+c+m)/3;
    total=p+c+m;
    printf("Average marks is %.2f and Total marks is %.2f",Avg,total);
    return 0;

}
