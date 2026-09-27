#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4};
    int Target = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == Target)
        {
            printf("Target found");
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Not found");
    }
    return 0;
}