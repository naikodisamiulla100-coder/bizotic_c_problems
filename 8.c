#include <stdio.h>
int main()
{
    int labour_count, rainfall, humidity, ripenness;
    float yield;
    printf("EEnter the labour count: ");
    scanf("%d", &labour_count);
    printf("ENteR the rainfall in mm:");
    scanf("%d", &rainfall);
    printf("Enter the humidity in percentage: ");
    scanf("%d", &humidity);
    printf("Enter the ripeness of the fruit in percentage: ");
    scanf("%d", &ripenness);
    if (labour_count >= 20 && rainfall >= 5 && humidity >= 85 && ripenness >= 50)
    {
        printf("The fruit is not ready for harvesting\n");
    }
    else
    {
        printf("The fruit is ready for harvesting\n");
        return 0;
    }
    yield = labour_count * 55;
    printf("The yield of the fruit is: %.2f\n", yield);
    return 0;
}