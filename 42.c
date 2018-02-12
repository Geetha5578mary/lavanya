#include <stdio.h>

int main(void) {
	int a,b;
	char s1[20];
	char s2[30];
	printf("enter the two strings");
	scanf("%s%s",s1,s2);
	a=strlen(s1);
	b=strlen(s2);
	if(s1==s2)
	{
		printf("%s",s1);
	}
	else if(a>b)
	{
		printf("%s",s1);
	}
	else
	{
		printf("%s",s2);
	}
	
	return 0;
}
