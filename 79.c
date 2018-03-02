#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter a,b");
scanf("%d%d",&a,&b);
c=a*b;
if(a*a==c && b*b==c &&c/a==a &&c/b==b)
{
 printf("yes");
 }
 else
 {
 printf("no");
 }
 getch();
 }
