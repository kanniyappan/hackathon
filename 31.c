
#include<stdio.h>

#include<conio.h>

int main()

{

int count_char=0,i;

char str[20];
  
gets(str);
 
for(i=0; str[i]!=NULL; i++)
 
{
     
if(str[i]!=' ')
     
{
   
count_char++;
  
}
 
}
 
printf("\n%d",count_char);

}