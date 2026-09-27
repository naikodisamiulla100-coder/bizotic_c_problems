#include <stdio.h>
int main()
{
    int r;
    scanf("%d", &r); // rows
    int value = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%d", value);
            value++;
        }
        printf("\n");
    }
    printf("the total tray is %d", value - 1);
    return 0;
}