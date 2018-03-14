#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[10],i,p,sum=0;
printf("enter the n and k");
scanf("%d %d",&n,&p);
printf("enter n numbers");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("the n numbers are %d",a[p-1]);
getch();
}
