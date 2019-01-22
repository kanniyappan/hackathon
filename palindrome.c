#include <stdio.h>

void main()

{
    
int n,reverse=0, rem=0,temp;
    
scanf("%d",&n);
    
temp=n;
    
if(n<=1000)
    
{
while(temp!=0)
    
{
        
rem=temp%10;
        
reverse=reverse*10+rem;
        
temp=temp/10;
    
}  
    
if(reverse==n)  
        
printf("Yes");
    
else
        
printf("No");

}
else
printf("Input Not Valid");
}