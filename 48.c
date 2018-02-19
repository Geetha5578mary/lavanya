#include <stdio.h>

int main(void) {
	int n,i,avg,tot=0;
	printf("enter the size\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("%d\n",i);
	tot=tot+i;
	}
	avg=tot/n;
	printf("the avgerage is %d\n",avg);
	return 0;
}
