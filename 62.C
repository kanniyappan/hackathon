#include<stdio.h>
main()
{
    char a[10];
    int i,c=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='0' && a[i]=='1')
        {
        c++;
        }
    }
    if(c==0)
    printf("No");
    else
    printf("Yes");
}
