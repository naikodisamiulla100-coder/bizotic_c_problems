#include <stdio.h>
int perfectNO(int n)
{
    if (n == 1)
    {
        return 0;
    }
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    if (perfectNO(n))
    {
        printf("perfect Number");
    }
    else
    {
        printf("not a perfect number");
    }
    return 0;
}