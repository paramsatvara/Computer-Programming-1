#include<stdio.h>
int main()
{
    float bytes,kb;
    printf("Enter bytes :");
    scanf("%f",&bytes);
    kb=bytes/1024;
    printf("KB = %.2f",kb);
    return 0;
}
