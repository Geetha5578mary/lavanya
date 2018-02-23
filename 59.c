#include<stdio.h>
#include<conio.h>
void main() {
int n,b[35],i,t;
printf("enter the n");
scanf("%d",&n);
printf("array elements\n");
for(i=0;i<=n;i++)
{
	scanf("the maximum element is %d",&b[i]);
}
t=b[0];
for(i=0;i<=n;i++)
{
if(t<b[i])
{
	t=b[i];
}
}
printf("%d\n",t);
getch();
}
