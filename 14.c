#include <stdio.h>
int main(void) {
int a=1,b=10,c;
 printf("\nenter the odd no b/w %d and %d\n",a,b);
 for(c=a;c<=b;c++)
 {
 	if(c%2==1)
 	{
 	printf("%d",c);
 }
 }
	return 0;
}
