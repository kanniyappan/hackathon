#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,k,c=0;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    c++;
    k=0;
    for(i=c-1;i>=0;i--)
    {
        b[k]=a[i];
        k++;
    }
    b[k]='\0';
    printf("%s",b);
}
