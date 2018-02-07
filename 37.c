#include <stdio.h>
 
int main(void) {
int a,b,t;
printf("enter two numbers");
scanf("%d%d",&a,&b);
t=a;a=b;b=t;
printf("the swapp values are %d\n%d\n",a,b);
	return 0;
}
