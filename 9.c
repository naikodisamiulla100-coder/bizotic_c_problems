#include <stdio.h>
int main()
{
    int n, e;
    char choice;
    float yield_loss;

    printf("Enter the choice 1:paddy 2:ragi 3:sugarcane\n");
    scanf("%c", &choice);
    if (choice == 1)
    {
        printf("paddy=87000 rupees\n");
        printf("ENter the land in hectors:\n");
        scanf("%d", &n);
        if (yield_loss <= 33)
        {
            printf("not valid");
        }
        else
        {
            printf("insurance valid");
            if (n <= 4)
            {
                printf("yield loss:", 0.75 * 87000);
            }
            else
            {
                printf("Enter the extra hectors e:");
                scanf("%d", &e);
                printf("yield loss:", 4 * 0.75 * 87000 + (0.75 * 87000 * e));
            }
        }
    }
    else if (choice == 2)
    {
        printf("ragi=41000 rupees\n");
        printf("ENter the land in hectors:\n");
        scanf("%d", &n);
        if (yield_loss <= 33)
        {
            printf("not valid");
        }
        else
        {
            printf("insurance valid");
            if (n <= 4)
            {
                printf("yield loss:", 0.75 * 87000);
            }
            else
            {
                printf("Enter the extra hectors e:");
                scanf("%d", &e);
                printf("yield loss:", 4 * 0.75 * 87000 + (0.75 * 87000 * e));
            }
        }
    }
    else if ()
    {
        printf("sugarcane=114000 rupees\n");
        printf("ENter the land in hectors:\n");
        scanf("%d", &n);
        if (yield_loss <= 33)
        {
            printf("not valid");
        }
        else
        {
            printf("insurance valid");
            if (n <= 4)
            {
                printf("yield loss:", 0.75 * 87000);
            }
            else
            {
                printf("Enter the extra hectors e:");
                scanf("%d", &e);
                printf("yield loss:", 4 * 0.75 * 87000 + (0.75 * 87000 * e));
            }
        }
    }
    if (n <= 3)
    {
        yield_loss =
    }
}