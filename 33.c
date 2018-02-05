#include <stdio.h>
#define SIZE 100
int main(void) {
char str[SIZE];
    char * s = str;
    int a, d, o,b;

    a = d = o = 0;
    printf("Enter any string : ");
    gets(str);

    while(*s)
    {
        if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
            a++;
        else if(*s>='0' && *s<='9')
            d++;
        else
            o++;

        s++;
        d=o;
    }
    printf("%d\n",d);

	return 0;
}
