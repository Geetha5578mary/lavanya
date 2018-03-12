#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
char sym;
clrscr();
printf("enter the a,b,sym:");
for(i=0;i<4;i++)
{
scanf("%d%c%d",&a,&sym,&b);
if(sym=='/')
{
printf("division is %d\n",a/b);
}
else if(sym=='%')
{
printf("modulo is %d\n",a%b);
}
else
{
printf("wrong symbol\n");
}
getch();
}
}
