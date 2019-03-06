#include <stdio.h>
void main() 
{
	int n,a[30],i,c1=0,c2=0,temp1,temp2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d ",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			c1++;
			temp1=a[i];
		}
		else
		{
			c2++;
			temp2=a[i];
		}
	}
	if(c1==1)
		printf("%d",temp1);
	else
		printf("%d",temp2);
}
