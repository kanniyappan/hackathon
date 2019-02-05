#include<stdio.h>
main() 
{
	char s[10];
	int i,n;
	scanf("%s %d",s,&n);
	int len;
	len=strlen(s);
	for(i=n;i<=len;i++)
	printf("%c",s[i]);
}
