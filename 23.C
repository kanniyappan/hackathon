#include<stdio.h>
#include<conio.h>
main()
{
int i,n,a[10],min;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]<min)
{
min=a[i];
}
}
printf("%d",min);
getch();
}