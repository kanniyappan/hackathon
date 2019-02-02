#include<stdio.h>
main()
{
int n,rem=0,c=0;
scanf("%d",&n);
while(n)
{
//rem=n%10;
n=n/10;
c++;
}
printf("%d\t",c);
}
