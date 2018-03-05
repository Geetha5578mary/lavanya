#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[100];
int l,i,t;
clrscr();
scanf("%s",s);
l=strlen(s);
t=l/2;
if(l%2==0)
{
s[t-1]='*';
s[t]='*';
printf("%s",s);
}
else
{
s[t]='*';
printf("%s",s);
 }
getch();
}
