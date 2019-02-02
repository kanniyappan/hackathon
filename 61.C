#include<stdio.h>
main()
{
    char a[10],b[10];
    int i,k,j;
    gets(a);
    scanf("%d",&k);
    j=0;
    for(i=0;i<k;i++)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    printf("%s",b);
}
