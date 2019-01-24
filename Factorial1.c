#include<stdio.h>

#include<conio.h>

main()

{

int i,fact1=1,j,n;

clrscr();

scanf("%d",&n);
if(n<=20)
{
for(j=1;j<=n;j++)

{

fact1=fact1*j;

}
}
printf("%d",fact1);

getch();

}
