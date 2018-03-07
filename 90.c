#include<stdio.h>
#include<conio.h>
void main()
{
char s[20];
int l,i;
clrscr();
printf("enter the string");
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]>='0' && s[i]<='9')
{
printf("%d",s[i]);
}
}
getch();
}
