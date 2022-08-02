#include<stdio.h>
int main()
{
    int a,i,b=0;
    printf("Enter a number : ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        b = b + (i * 2 - 1);
    }
    printf("The sum of first %d odd natural number is %d",a,b);

    return 0;
}