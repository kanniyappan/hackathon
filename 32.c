#include<stdio.h>

#include<conio.h>

 main()

{

int count_word=1,i;
 
char str[20];
  
gets(str);

for(i=0; str[i]!=NULL; i++)
 
{
     
if(str[i]==' ')
     
{
   
count_word++;
  
}
 
}
 
printf("\n%d",count_word);

}
