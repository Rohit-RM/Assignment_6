#include<stdio.h>
int main()
{
    int a,i,b=0;
    printf("Enter a number : ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        b = b + (i * i * i);
    }

    printf("The sum of cubes of first %d natural numbers is %d",a,b);

    return 0;
}