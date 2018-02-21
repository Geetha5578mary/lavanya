#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter the a,b");
scanf("%d%d",&a,&b);
a=a^b;
b=b^a;
a=a^b;
printf("%d\t%d\t",a,b);
getch();
}
