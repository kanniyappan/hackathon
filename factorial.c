#include<stdio.h>

#include<conio.h>

main()

{

int i,fact=1,j,n;

clrscr();

scanf("%d",&n);

for(j=1;j<=n;j++)

{

fact=fact*j;

}

printf("%d",fact);

getch();

}