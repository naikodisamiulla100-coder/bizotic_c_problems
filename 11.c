#include <stdio.h>
int main
{
    int n, egs;
    printf("ENter no.of days");
    scanf("%d", &n);
    printf("Eggs for days");
    for (int i = 1; i <= 5; i++)
    {
        printf("egs", egs);
        scanf("%d", &egs);
        for (i = 1; i <= 5; i++)
        {
            float avr = egs / n;
            printf("Average eggs for day %d is %.2f\n", i, avr);
        }
    }
    return 0;
}