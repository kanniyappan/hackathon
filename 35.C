
#include<stdio.h>

#include<conio.h>

int main()

{
 
int c=0,j;
 
char s[100];
  
gets(s);

for(j=0; s[j]!=NULL; j++)
 
{
     
if(s[j]=='0' || s[j]=='1'|| s[j]=='2'||
        s[j]=='3'|| s[j]=='4'|| s[j]=='5'||
        s[j]=='6'|| s[j]=='7'|| s[j]=='8'|| s[j]=='9')
     
{
   
c++;
 
}
 
}
 
printf("\n%d",c);

}