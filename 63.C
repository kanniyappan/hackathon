 #include<stdio.h>
void main()
 {
int a[100],l,n=10,i,j;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
 l=a[0];
for(i=1;i<n;i++)
{
if(a[i]<l) l =a[i];
}
printf("%d",l);
 }
