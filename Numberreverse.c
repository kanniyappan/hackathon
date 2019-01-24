#include<stdio.h>
void main()
{
    int n,rem,sum=0;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    printf("%d",sum);
    
}
