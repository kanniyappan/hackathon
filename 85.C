#include <stdio.h>
main()
{
    char a[30];
    int i,n;
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        printf("%c",a[i]);
    }
    printf(" ");
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        printf("%c",a[i]);
    }
}
