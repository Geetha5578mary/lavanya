#include <stdio.h>
 
int main(void) {
	int a = 0, b = 1, n1 = 0, n;
    printf("Enter a number ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", a, b);
    n1= a + b;
    while(n1 <= n)
    {
        printf("%d, ",n1);
        a = b;
        b = n1;
        n1= a + b;
    }
	return 0;
}
