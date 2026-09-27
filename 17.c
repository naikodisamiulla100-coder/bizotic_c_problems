// palindrome checker
#include <stdio.h>

int main()
{
    int n, temp;
    int digit;
    int reverse = 0;

    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    if (n == reverse)
    {
        printf("PALINDROME\n");
    }
    else
    {
        printf("NOT A PALINDROME\n");
    }

    return 0;
}