#include<stdio.h>
#include<math.h>
int main() {
	int a,d,n,i,tn;
	int sum=0;
	scanf("%d",&a);
	scanf("%d",&d);
	scanf("%d",&n);
	sum = ( n * ( 2 * a + ( n -1 ) * d ) )/ 2;
	tn = a + (n-1) * d;
	for (i=a;i<=tn; i= i + d ) {
		if (i != tn)
        {}
		else
		printf("%d ",sum);
	}
	return 0;
}
