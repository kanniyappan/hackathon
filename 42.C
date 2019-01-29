#include<stdio.h>

void main()

{

char a[100],b[100];

int i,d=0,e=0;

scanf("%s%s",&a,&b);

for(i=0;a[i]!='\0';i++)

{

d++;

}

for(i=0;b[i]!='\0';i++)

{

e++;

}

if(d==e)

printf("%s",b);

else if(d>e)

printf("%s",a);

else

printf("%s",b);

}