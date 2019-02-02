#include<stdio.h>
main()
{
    char a[20];
    int i,c=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a' || a[i]=='e'|| a[i]=='i'||a[i]=='o'||a[i]=='u')
        c++;
    }
    if(c==0)
    printf("No");
    else
    printf("Yes");
}
