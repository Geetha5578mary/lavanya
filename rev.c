#include <stdio.h>
int main()
{
    int n, rev= 0, rem, orig;

    printf("Enter an integer: ");
    scanf("%d", &n);

    orig = n;
    while( n!=0 )
    {
        rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
    }
    if (orig == rev)
        printf("yes);
    else
        printf("no");
    
    return 0;
}
