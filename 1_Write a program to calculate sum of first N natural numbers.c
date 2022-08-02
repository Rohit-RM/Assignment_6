#include<stdio.h>
int main()
{
    int a,i,b=0;
    printf("Enter a number : ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        b = b + i;
    }
    printf("First %d natural number sum is : %d",a,b);

    return 0;
}