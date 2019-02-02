#include<stdio.h>
main()
{
   int n,k,i,a[10],c=0;
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
       if(a[i]==k)
       c=1;
   }
   if(c==0)
   printf("No");
   else
   printf("yes");
}
