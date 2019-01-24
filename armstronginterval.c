#include <stdio.h>

void main()

{    
int a, b, i, temp1, temp2, rem, n = 0, result = 0;
    
scanf("%d %d", &a, &b);
    
for(i = a + 1; i < b; i++)
    
{
        
temp2 = i;
        
temp1 = i;
        
while (temp1 != 0)
        
{
            
temp1 = temp1/10;
           
n++;
        
}
        
while (temp2 != 0)
        
{
            
rem = temp2 % 10;
            
result =result+ pow(rem, n);
            
temp2 =temp2/ 10;
        
}
        
if (result == i) 
{
            
printf("%d ", i);
        
}
        
n = 0;
        
result = 0;

}

}