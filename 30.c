#include<stdio.h>

int main()

{

int h1, m1,h2, m2, h3, m3;

scanf("%d%d", &h1, &m1);

scanf("%d%d", &h2, &m2);

m3=(m1-m2);

h3=(h1-h2);

printf("%d\t%d",h3, m3);

}