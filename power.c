#include <stdio.h>
 
int main(void) {
    int b,e;
    int result = 1;
 
    printf("Enter a base");
    scanf("%d", &b);
 
    printf("Enter an exponent");
    scanf("%d", &e);
 
    while (e != 0)
    {
        result *= b;
        --e;
    }
 
    printf("%d", result);
 
    return 0;
}
