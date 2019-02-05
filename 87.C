#include<stdio.h>
void main()
{
int a1,b1,g=0;
scanf("%d %d",&a1,&b1);
g=(a1<b1)?a1:b1;
if(a1%g==0 && b1%g==0)
printf("%d",g);
}
