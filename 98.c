#include <stdio.h>
#include<conio.h>
void main()
{
int n,i,a[10];
printf("enter the n");
scanf("%d",&n);
printf("enter the n numbers");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
if(a[i]!=i)
{
printf("the changed no is %d",i);
}
}
getch();
}a
