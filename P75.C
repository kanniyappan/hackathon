#include <stdio.h>
void main() 
{
	int n,a[30],i,j,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
		if(a[i]<a[j])
		   c++;
		}
	}
	printf("%d",c);
}
