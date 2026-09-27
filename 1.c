#include <stdio.h>
int main()
{
    int n, sum;
    printf(":\n");
    scanf("%d", &n);
    sum = (n % 9 == 0 ? 9 : n % 9);
    printf("Sum of digits: %d\n", sum);
    return 0;
}