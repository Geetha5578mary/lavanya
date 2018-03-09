#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[10];
int i,l;
clrscr();
printf("enter the string\n");
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(i%2==0)
printf("odd %c\n",s[i]);
}
for(i=0;i<l;i++)
{
if(i%2!=0)
printf("even %c\n",s[i]);
}
getch();
}
