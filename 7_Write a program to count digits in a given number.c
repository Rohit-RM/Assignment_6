#include<stdio.h>
int main()
{
    int a,i,b=0;
    printf("Enter a number : ");
    scanf("%d",&a);

    while(a!=0)
    {
        a = a / 10;

        b++;
    }
    printf("Its has %d digit",b);
}