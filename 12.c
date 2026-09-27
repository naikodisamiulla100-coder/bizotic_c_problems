#include <stdio.h>
int main()
{
    int n, current;
    current = 0;
    int trip = 0;
    while (1)
    {
        scanf("%d", &n);
        if (n <= 0)
        {
            break;
        }
        if (current + n < 240)
        {
            current += n;
        }
        else
        {
            trip++;
            current = n;
        }
    }
    if (n == 0)
    {
        trip++;
    }
    printf("Number of trips: %d\n", trip);
    printf("Current bag: %d\n", current);
}