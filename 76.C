#include<stdio.h>
int main()
{
    int i,n,factor;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
         if(n%i==0) 
         {
             factor=i;
         }
    }
    if(factor>1) 
    {
          printf ("Yes");
    }
    else 
    {
          printf ("No");
    }
}
