#include <stdio.h>

int main()
{
    int n;

    // Get the size of the matrix from the user
    printf("Enter n: ");
    scanf("%d", &n);

    // Create a 2D array of size n x n
    int a[n][n];

    // Initialize boundaries and starting value
    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;
    int value = 1;

    // Loop until the boundaries cross each other
    while (top <= bottom && left <= right)
    {

        // 1. Move Left to Right along the top row
        for (int j = left; j <= right; j++)
        {
            a[top][j] = value;
            value++;
        }
        top++; // Move the top boundary down

        // 2. Move Top to Bottom along the right column
        for (int i = top; i <= bottom; i++)
        {
            a[i][right] = value;
            value++;
        }
        right--; // Move the right boundary left

        // 3. Move Right to Left along the bottom row
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                a[bottom][j] = value;
                value++;
            }
            bottom--; // Move the bottom boundary up
        }

        // 4. Move Bottom to Top along the left column
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                a[i][left] = value;
                value++;
            }
            left++; // Move the left boundary right
        }
    }

    // Print the generated spiral matrix
    printf("\nSpiral Matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // \t adds spacing to keep the matrix columns aligned
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
