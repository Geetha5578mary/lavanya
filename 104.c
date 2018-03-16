#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,p=1,i;
printf("enter n,k");
scanf("%d %d",&n,&k);
for(i=0;i<k;i++)
{
p=p*n;
}
printf("%d",p);
getch();
}
