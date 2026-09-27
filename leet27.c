#include <stdio.h>

int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int val;
    scanf("%d", &val);

    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != val)
        {
            arr[k] = arr[i];
            k++;
        }
    }
    printf("%d\n", k);
    for (int i = 0; i < k; i++)
    {
        printf("%d", arr[i]);
        if (i < k - 1)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}