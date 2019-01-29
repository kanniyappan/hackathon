#include<stdio.h>

#include<conio.h>

int main()

{

int count_lines=1,i;
 
char str[20];
  
gets(str);
 
for(i=0; str[i]!=NULL; i++)
 
{
   
if(str[i]=='.')
     
{
   
count_lines++;
  
}
 
}
 
printf("\n%d",count_lines);

}