#include <stdio.h>
int main()
{
    float weight, lcost;
    printf("weight of cocoon:\n");
    scanf("%f", &weight);
    printf("the weight of raw silk=%f", weight / 7.5);
    printf("price =%d", weight / 7.5 * 4200);
    lcost = weight * 85;
    printf("locst=%f", lcost);
    printf("total amount profit=%f", weight / 7.5 * 4200 - lcost);
    return 0;
}