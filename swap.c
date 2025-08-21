#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    printf("Before swapping : a=%d , b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Swapped numbers : a=%d ,b=%d\n",a,b);
    return 0;
}
