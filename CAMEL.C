#include<stdio.h>
void main()
{
    char a[20];
    int i=0;
    gets(a);
    if(a[0]>='a' && a[0]<='z')
    a[0]=a[0]-32;
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            if(a[i+1]>='a' && a[i+1]<='z')
            {
            a[i+1]=a[i+1]-32;
            }
        }
    }
    puts(a);
}
