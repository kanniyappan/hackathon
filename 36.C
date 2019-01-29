#include<stdio.h>

#include<conio.h>

int main()

{
 
int c=0,j;
 
char str[100];
  
gets(str);
 
for(j=0; str[j]!=NULL; j++)
 
{
     
if(str[j]>='0' && str[j]<='9')
            
{}
        
else if((str[j]>='A' && str[j]<='Z')||(str[j]>='a' && str[j]<='z'))
 {}
        
else if(str[j]==' ')
            
{}
        
else
            
c++;
 
}
 
printf("\n%d",c);

}