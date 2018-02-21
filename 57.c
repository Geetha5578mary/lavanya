#include<stdio.h>
#include<conio.h>
void swap(int,int);
void main()
{
	int a,b;
	printf("enter the a,b");
	scanf("%d%d",&a,&b);
swap(a,b);
getch();
}
void swap(int a,int b)
{
	int t;
	t=a;
	a=b;b=t;
	printf("%d\t%d\t",a,b);
}
