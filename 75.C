#include<stdio.h>
main()
{
    char s[100];
    int n,i;
    scanf("%s",s);
    n=strlen(s);
    if(n%2==0)
    {
        s[n/2]='*';
        s[(n/2)-1]='*';
    }
    else
    s[n/2]='*';
    printf("%s",s);
}
