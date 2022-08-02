#include<stdio.h>
int main()
{
     int i,a,b;
     scanf("%d %d",&a,&b);
     for(i=2;i<=a*b;i++)
     {
        if(i%a == 0 && i%b == 0)
        {
            printf("%d",i);
            break;
        }
     }
}