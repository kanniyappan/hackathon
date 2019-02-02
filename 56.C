#include<stdio.h>
main()
{
   char s[10];
    int i,c=0;
    gets(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9' && s[i]>='a' && s[i]<='z')
            c=1;
}
    if(c==0)
            printf("No");
        else
            printf("Yes");
}
