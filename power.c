#include <stdio.h>

void main()

{
    
int n,k,power = 1,i;
    
scanf("%d%d", &n,&k);
    
for(i=1; i<=k; i++)
    
{
        
power = power * n;
    
}
    
printf("%d",power);

}