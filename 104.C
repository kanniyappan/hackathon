#include<stdio.h>
main() 
{
	int a,b,i,res=1;
	scanf("%d %d",&a,&b);
	for(i=1;i<=b;i++)
	res=res*a;
	printf("%d",res);
}
