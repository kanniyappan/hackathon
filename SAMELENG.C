#include<stdio.h>
#include<conio.h>
void main()
{
char a[20],b[20];
int i,c=0,c1=0,j,t;
clrscr();
scanf("%d",&t);
while(t)
{
scanf("%s %s",&a,&b);
for(i=0;a[i]!='\0';i++)
{
c++;
}
for(i=0;b[i]!='\0';i++)
{
c1++;
}
if(c==c1)
{
printf("same number of characters");
}
else
{
if(c>c1)
{
j=0;
for(i=0;i<c1;i++)
{
a[j]=a[i];
j++;
}
a[j]='\0';
printf("%s %s",a,b);
}
else
{
j=0;
for(i=0;i<c;i++)
{
b[j]=b[i];
j++;
}
b[j]='\0';
printf("%s %s",a,b);
}
}
c=0;
c1=0;
t--;
}
getch();
}