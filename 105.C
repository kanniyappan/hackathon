#include<stdio.h>
main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    int pow= 10;
    while(b>=pow)
    pow *= 10;
    i=a*pow+b;        
    printf("%d",i);
}
