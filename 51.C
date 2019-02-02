#include<stdio.h>

main()

{
    
int n,rem=0,rev=0;
    
scanf("%d",&n);
   
while(n)
    
{
        
rem=n%10;
        
rev=(rev*10)+rem;
        
n=n/10;
    
}
    
n=rev;
    
while(n)
    
{
        
rem=n%10;
        
printf("%d\t",rem);
        
n=n/10;
    
}

}