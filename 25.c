#include<stdio.h>
 
main( )                                                     
   
{                                                           
       
int i,j,n;                                              
       
int median,a[100],t;                     
       
scanf("%d", &n);                                      
       
for (i = 1; i <= n ; i++)                               
           
scanf("%d", &a[i]);                                 

for (i = 1 ; i <= n-1 ; i++)                            
       
{     
           
for (j = 1 ; j <= n-i ; j++)                         
          
{                                                    
              
if (a[j] <= a[j+1])                              
              
{
                     
                
t = a[j];                                      
                
a[j] = a[j+1];                                 
                
a[j+1] = t;                                    
              
}                                                
              
else
              
continue ;                                     
          
}                                                    
       
}

if ( n % 2 == 0)                                        
          
median = (a[n/2] + a[n/2+1])/2.0 ;                   
       
else                                                    
          
median = a[n/2 + 1];                                 

for (i = 1 ; i <= n ; i++)                              
       
printf("%d  ", a[i]);                               
       
printf(" %d\n", median);                
       
}   