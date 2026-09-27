#include <stdio.h>

int grammar(int row, int position)
{
    if (row == 1)
    {
        return 0;
    }

    int value = grammar(row - 1, (position + 1) / 2);

    if (position % 2 == 0)
    {
        return 1 - value;
    }
    else
    {
        return value;
    }
}

int main()
{
    int row, position;

    scanf("%d %d", &row, &position);

    if (row < 1 || row > 30)
    {
        printf("INVALID ROW");
    }
    else
    {
        printf("%d", grammar(row, position));
    }

    return 0;
}