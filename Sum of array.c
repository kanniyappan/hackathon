#include <stdio.h>

void main()

{
    
int a[20],i,k,sum = 0,n;
    
scanf("%d",&n);
    
for(i=0;i<n;i++)
    
scanf("%d",&a[i]);
    
scanf("%d",&k);
    
for(i=0; i<k;i++)
    
{
        
sum=sum+a[i];
    
}
  
printf("%d",sum);

}
