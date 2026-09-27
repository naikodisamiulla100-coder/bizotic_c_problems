#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i, j, k, a = 1, b = n * n * 1;
    for (i = n; i >= 1; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("__");
            for (j = 0; j < i; j++)
            {
                printf("%d", a++);
                printf("*");
            }
            for (k = 0; k < i; k++)
            {
                printf("%d", b++);
                printf("*");
            }
            printf("%d", b);
            printf("\n");
            b = b - 2 * (i - 1);
        }
    }
    return 0;
}