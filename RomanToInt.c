#include<stdio.h>
int con(char a)
{
    switch(a)
    {
        case 'I':
        return 1;
        break;
        case 'V':
        return 5;
        break;
        case 'X':
        return 10;
        break;
       
    }
}
void main()
{
    char a[10];
    int i,b[10],n=0,sum=0;
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++){
    b[i]=con(a[i]);
    n++;
    }
    b[i]='\0';
    if(n==1)
    printf("%d",b[0]);
    else{
    for(i=0;i<n;i++)
    {
     if(b[i]<b[i+1])
     {
     sum=-(sum-b[i]);
     sum=-sum;
     }
    else
       sum+=b[i]; 
    }
       printf("%d",sum);
    }
            
}
