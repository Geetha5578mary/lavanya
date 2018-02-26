#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n;
    clrscr();
    scanf("%d",&n);
    n1=n+1;
    while(n1!=0)
    {
	if(n1%10==0)
	{
	    printf("%d",n1);
	    break;
	}
	n1++;
    }
    getch();
}
