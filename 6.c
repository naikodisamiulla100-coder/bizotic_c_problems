#include <stdio.h>
int main()
{
    int A;
    printf("Enter the fat percentage in milk:");
    scanf("%d", &A);
    if (A < 3)
    {
        printf("rejected");
    }
    else if (A >= 3 && A < 3.5)
    {
        printf("grade=C \n accepted \n ,33 rupees per litre");
        return 0;
    }
    else if (A >= 3.5 && A <= 4.0)
    {
        printf("grade=B \n accepted \n ,38 rupees per litre");
        return 0;
    }
    else if (A > 4.0)
    {
        printf("accepted,42 rupees litre");
        return 0;
    }
    else
    {
        printf("Rejected");
    }
}