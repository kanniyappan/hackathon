#include<stdio.h>

#include<conio.h>

void main()

{

char s[30];

int i,flag=0,n=0;

clrscr();

scanf("%s",s);

for(i=0;s[i]!='\0';i++)

{

if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')

{

flag=flag+1;

}

}

if(flag==0)

printf("No");

else

printf("Yes");

getch();

}