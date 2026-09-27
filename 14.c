#include <stdio.h>
int main()
{
    int r;
    scanf("%d", &r);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}