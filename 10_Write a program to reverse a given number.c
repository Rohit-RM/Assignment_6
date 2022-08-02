#include<stdio.h>
int main()
{
    int x,n,a,i,c;
    scanf("%d",&n);
      int m;
     m=n;
    while (m != 0)
    {
        m = m/10;
        c++;
    }
  while(n!=0)
    {
        x = n% 10;
        printf("%d",x);
        n=n/10;
    }
    
}