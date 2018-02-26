#include <stdio.h>
#include<conio.h>
void main()
{
    char s[20];
    int n,i;
    printf("enter the string");
    scanf("%s",s);
    printf("enter the value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	printf("%c",s[i]);
    }
getch();
}
