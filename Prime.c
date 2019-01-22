#include <stdio.h>

void main()

{
    
int n,i, flag;
    
scanf("%d", &n);
    
if(n<=1000)

{
    
flag = 0;

for (i = 2; i <= n/ 2; i++)

{

if ((n % i) == 0)
    
{
    
flag = 1;
    
break;

}

}

if (flag == 0)

printf("Yes");

else
        
printf("No");

}

else

printf("Input not valid");
    
}
