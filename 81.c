#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the kabali number");
scanf("%d",&a);
printf("enter the opponent number");
scanf("%d",&b);
if(a>b)
{
c=a-b;
printf("%d",c);
}
else
{
printf("wrong number");
}
getch();
}
