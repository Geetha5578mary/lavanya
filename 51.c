#include <stdio.h>

int main(void) {
int a,b,c,d;
printf("enter the n");
scanf("%d",&n);
a=n/100;
b=n%100;
c=b/10;
d=b%10;
printf("%d\t%d\t%d\t",a,c,d);
	return 0;
}
