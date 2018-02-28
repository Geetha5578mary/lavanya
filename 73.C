#include<stdio.h>
#include<conio.h>
void main()
{
int a,l,k;
printf("enter the value");
scanf("%d",&a);
printf("enter the l and k");
scanf("%d%d",&l,&k);
if(a>l && a<k)
printf("yes");
else
printf("no");
getch();
}
