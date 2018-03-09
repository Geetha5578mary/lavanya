#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[100];
int l,i,j,t;
clrscr();
printf("enter the string");
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
for(j=i+1;j<l;j++)
{
if(s[i]>s[j])
{
t=s[i];
s[i]=s[j];
s[j]=t;
}
}
}
printf("%s",s);
getch();
}
