#include <stdio.h>

int main()
{
    double price[7];
    double max, min, sum = 0, average;
    int maxSize = 1, minSize = 1;
    int count = 0;

    // Read 7 prices
    for (int i = 0; i < 7; i++)
    {
        scanf("%lf", &price[i]);
        sum = sum + price[i];
    }

    // Assume first price is maximum and minimum
    max = price[0];
    min = price[0];

    // Find maximum and minimum
    for (int i = 1; i < 7; i++)
    {
        if (price[i] > max)
        {
            max = price[i];
            maxSize = i + 1;
        }

        if (price[i] < min)
        {
            min = price[i];
            minSize = i + 1;
        }
    }

    // Calculate average
    average = sum / 7;

    // Count prices above average
    for (int i = 0; i < 7; i++)
    {
        if (price[i] > average)
        {
            count++;
        }
    }

    printf("Highest price = %.2lf on day %d\n", max, maxSize);
    printf("Lowest price = %.2lf on day %d\n", min, minSize);
    printf("Average = %.2lf\n", average);
    printf("Days above average = %d\n", count);

    return 0;
}