#include <stdio.h>
    
int main()
    
{
      
int i, k, t;
      
scanf("%d%d", &i, &k);
    
i = i ^ k;
    
k = i ^ k;
    
i = i ^ k;
    
printf("%d \t %d ", i, k);

}