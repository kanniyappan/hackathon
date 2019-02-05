#include<stdio.h>
void main()
{
char a[10];
int n,i,j,temp;
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("%s",a);
}
