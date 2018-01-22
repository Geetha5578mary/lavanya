#include <stdio.h>
int main(void) {
    int n, i;
    int fact = 1;
    printf("Enter an integer: ");
    scanf("%d",&n);
    if (n < 0)
        printf("no negative");
        else
    {
        for(i=1; i<=n; ++i)
        {
            fact *= i;             
        }
        printf("%d", fact);
    }

    return 0;
}
