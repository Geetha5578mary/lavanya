#include <stdio.h>
 
int main(void) {
char a[100];
    int i,b=0;
    printf("\n enter the contents of paragraph");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            b++;
        }
    }
        printf("%d",b);
 
	return 0;
}
