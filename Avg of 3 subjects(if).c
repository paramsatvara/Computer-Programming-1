#include<stdio.h>
int main()
{
    float p,c,m,avg;
    printf("Enter phy marks : ");
    scanf("%f",&p);
     printf("Enter chem marks : ");
    scanf("%f",&c);
     printf("Enter maths marks : ");
    scanf("%f",&m);
    avg=(p+c+m)/3;
    if(avg>=70)
    {
        printf("Your marks is %f and you passed with distinction.",avg);
    }
    else if(avg>=60)
    {
        printf("Your marks is %f and you passed with first class.",avg);

    }
    else if(avg>=50)
    {
        printf("Your marks is %f and you passed with second class.",avg);
    }
    else if(avg>=35)
    {
        printf("Your marks is %f and you passed with third class.",avg);
    }
    else if(avg<35)
    {
        printf("You are failed");
    }
    return 0;

}
