#include <stdio.h>

int main()
{
    int n, temp;
    int digit;
    int reverse = 0;
    int digits = 0;
    int sum = 0;
    int square_sum = 0;
    int alternating_sum = 0;
    int position = 1;

    scanf("%d", &n);

    temp = n;

    if (n == 0)
    {
        digits = 1;
    }
    else
    {

        while (temp > 0)
        {
            digit = temp % 10;

            digits++;
            sum = sum + digit;
            square_sum = square_sum + digit * digit;

            reverse = reverse * 10 + digit;

            temp = temp / 10;
        }

        temp = reverse;

        while (temp > 0)
        {
            digit = temp % 10;

            if (position % 2 == 1)
            {
                alternating_sum = alternating_sum + digit;
            }
            else
            {
                alternating_sum = alternating_sum - digit;
            }

            position++;
            temp = temp / 10;
        }
    }

    printf("Number of digits: %d\n", digits);
    printf("Sum of digits: %d\n", sum);
    printf("Sum of squares: %d\n", square_sum);
    printf("Alternating sum: %d\n", alternating_sum);

    if (alternating_sum % 11 == 0)
    {
        printf("VALID\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}