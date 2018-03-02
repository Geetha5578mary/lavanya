#include <stdio.h>
#include<conio.h>
void main()
{
  float n;
  int d;
  clrscr();
  scanf("%f",&n);
  if(n<0)
  d=(int)(n-0.5);
  else
  d=(int)(n+0.5);
  printf("%d",d);
  getch();
}
