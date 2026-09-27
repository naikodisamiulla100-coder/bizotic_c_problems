#include <stdio.h>

int main()
{
    int notes, withdrawal;
    int total = 0;

    printf("Enter number of Rs 500 notes: ");
    scanf("%d", &notes);

    while (1)
    {
        printf("Enter withdrawal amount (0 to stop): ");
        scanf("%d", &withdrawal);

        if (withdrawal == 0)
        {
            break;
        }

        if (withdrawal % 500 != 0)
        {
            printf("NOT A MULTIPLE OF 500\n");
            continue;
        }

        if (withdrawal / 500 > notes)
        {
            printf("CASSETTE EMPTY\n");
            break;
        }

        notes = notes - (withdrawal / 500);
        total = total + withdrawal;

        printf("SERVED %d\n", notes);
    }

    printf("Total amount dispensed: Rs %d\n", total);

    return 0;
}