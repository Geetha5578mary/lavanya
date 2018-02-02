#include <stdio.h>
 
int main(void) {
	int h,m,h1,h2,m1,m2;
	printf("\nenter the hours\n");
	scanf("%d%d",&h1,&h2);
	printf("enter the minutes");
	scanf("%d%d",&m1,&m2);
	h=h1-h2;
	m=m1-m2;
	printf("\n%d\t%d\t",h,m);
 
	return 0;
}
