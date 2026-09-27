#include <stdio.h>

void calibrate(float *level, float *temp, float levelOffset, float tempOffset)
{
    *level = *level + levelOffset;
    *temp = *temp + tempOffset;
}

void resetToZero(float *level, float *temp)
{
    *level = 0.0;
    *temp = 0.0;
}

int main()
{
    float level, temp;
    float levelOffset, tempOffset;

    // Read input
    scanf("%f", &level);
    scanf("%f", &temp);
    scanf("%f", &levelOffset);
    scanf("%f", &tempOffset);

    // Print raw values
    printf("Raw: %.2f %.2f\n", level, temp);

    // Calibrate
    calibrate(&level, &temp, levelOffset, tempOffset);

    // Print corrected values
    printf("Corrected: %.2f %.2f\n", level, temp);

    // Reset
    resetToZero(&level, &temp);

    // Print reset values
    printf("Reset: %.2f %.2f\n", level, temp);

    return 0;
}