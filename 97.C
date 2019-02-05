#include<stdio.h>
void main()
{
    int a,rem,rev=0;
    scanf("%d",&a);
    while(a)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    printf("%d",rev);
}
