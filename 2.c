#include <stdio.h>
int main()
{
    int cost_per_quantol, empty_t_weight, sugar_weight, q;
    printf("Enter the cost per quantol of sugar: ");
    scanf("%f", &cost_per_quantol);
    printf("Enter the empty weight of the truck: ");
    scanf("%d", &empty_t_weight);
    printf("Enter the weight of sugar: ");
    scanf("%f", &sugar_weight);
    q = (sugar_weight - empty_t_weight) / 100;
    printf("Total cost of sugar: %d\n", q * cost_per_quantol);
    printf("The remaing is ", q);
    return 0;
}