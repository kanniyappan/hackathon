#include<stdio.h>
void main()
{
    char a[20],b[20];
    int i,c=0;
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            c++;
        }
    }
    if(c==1)
    printf("Yes");
    else
    printf("No");
}
