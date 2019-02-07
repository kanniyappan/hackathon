#include<stdio.h>
void main()
{
int i,c,k=0,n,a[10],b,g[10],z;
scanf("%d",&n);
scanf("%d",&b);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==1)
{
g[k]=a[i];
k++;
}
}
g[k]='\0';
printf("%d",g[b-1]);
}
