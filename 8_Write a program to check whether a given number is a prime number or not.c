#include<stdio.h>
int main()
{
    int a,i,b=0;
    printf("Enter an number : ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        if(a%i == 0)
        {
            b++;
        }
    }
    if(b  == 2)
    {
        printf("Its a prime number ");
    }
    else
    {
        printf("Its not a prime number");
    }
}