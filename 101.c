#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
int n,l,p,i;
char s[100];
printf("enter string");
scanf("%s",s);
printf("enter the n");
scanf("%d",&n);
l=strlen(s);
p=l-n;
for(i=p;i<l;i++)
{
printf("%c",s[i]);
}
getch();
}
