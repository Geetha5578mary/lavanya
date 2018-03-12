#include<stdio.h>
#include<conio.h>
void main()
{
int tot,a,b,c;
printf("enter the a,b,c values");
scanf("%d%d%d",&a,&b,&c);
if(a>0 &&b>0 && c>0)
{
tot=a*b*c;
printf("%d",tot);
}
else
{
printf("wrong");
}
getch();
}
