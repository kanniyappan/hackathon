#include<stdio.h>
void main()
{
char a[10];
int i;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
    if(a[i]>='0' && a[i]<='9')
    printf("%c",a[i]);
}
}
