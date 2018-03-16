#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter the n");
scanf("%d",&n);
while(n%2==0)
{
n=n/2;
}
printf("%d",n);
getch();
}
