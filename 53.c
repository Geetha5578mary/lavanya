#include <stdio.h>

int main(void) {
int i,n,sum=0,rem;
scanf("%d",&n);
while(n!=0)
{
	rem=n%10;
	sum=sum+rem;
	n=n/10;
	
}
printf("the sum is %d",sum);
	return 0;
}
