#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
int a=-1,b=1,c=0;
printf("enter the n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
c=a+b;
printf("%d\t",c);
a=b;
b=c;
}
getch();
}
