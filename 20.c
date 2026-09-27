#include <stdio.h>
#include <math.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = factorial(n);
    printf("the factorial of %d is %d", n, result);
    return 0;
}