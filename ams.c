#include <stdio.h>

int main(void) {
    int num, orig, rem, res = 0;

    printf("Enter a number ");
    scanf("%d", &num);

    orig = num;

    while (orig != 0)
    {
        rem = orig%10;
        res += rem*rem*rem;
        orig /= 10;
    }

    if(res == num)
        printf("yes");
    else
        printf("no");

    return 0;
}

