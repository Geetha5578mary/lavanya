#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=1,n,a[20];
printf("enter tghe n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum*a[i];
}
printf("%d",sum);
getch();
}
