
#include <stdio.h>

int main(void) {
char a[50];
	int n,i,count=1;
	printf("\n enter the values");
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]!=' ' && a[i+1]==' ')
			count=count+1;
	}
	printf("\n%d",count);
	return 0;
}
