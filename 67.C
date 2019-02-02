#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    n=n+(10-(n%10));
    printf("%d",n);
}
