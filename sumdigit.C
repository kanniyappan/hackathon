#include<stdio.h>
int fun(int n)
{
int rem,sum=0;
while(n)
{
rem=n%10;
sum+=rem;
n/=10;
}
return sum;
}
void main()
{
int n,i,k;
scanf("%d",&n);
if(n<800)
{
printf("INVALID");
}
else{
k=800;
for(i=0;k<n;i++)
{
if(i!=0)
printf("%d ",fun(k));
k+=i;
i++;
}
}
}
