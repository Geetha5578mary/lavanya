#include <stdio.h>
 
int main(void) {
char s[100];
 int n=0,i=0;
 printf("Enter any string and characters:");
 gets(s);
  while(s[i]!='\0')
 {
 if(s[i]>='0' && s[i]<='9')
  {
  n++;
  }
  i++;
  }
  printf("numbers = %d\n",n);
	return 0;
}
 
