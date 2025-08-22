#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter two numbers :");
    scanf("%f%f",&a,&b);
    if(a>b)
    {
        printf("largest number = %f\n",a);
        printf("smallest number = %f\n",b);
    }
    else if(b>a)
    {
        printf("largest number = %f\n",b);
        printf("smallest number = %f\n",a);
    }
    return 0;

}
