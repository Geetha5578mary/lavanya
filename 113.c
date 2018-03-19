#include <stdio.h>
#include<conio.h>
void main()
{
   int a[10],n,k,count=0,i;
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(a[i]==k)
       count++;
   }
   printf("%d",count);
    getch();
}
