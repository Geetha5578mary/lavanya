#include <stdio.h>

int main(void) {
int k,i;
char s;
printf("enter the k ");
scanf("%d",&k);
printf("enter the string");
scanf("%s",s);
for(i=0;i<k;i++)
{
	printf("%s\n",s);
}
	return 0;
}
