#include<stdio.h>
main()
{
    int a,b,i;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    if(c=='/')
    printf("%d",(a/b));
    else
    printf("%d",(a%b));
}
