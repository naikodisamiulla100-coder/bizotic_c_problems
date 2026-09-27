#include <stdio.h>

int main()
{
    int tfoot, cfoot, depth, casing;

    printf("Enter total foot of drilling: ");
    scanf("%d", &tfoot);

    printf("Enter casing foot of drilling: ");
    scanf("%d", &cfoot);

    depth = (tfoot - (tfoot > 300) * (tfoot - 300)) * 75 + ((tfoot > 300) * (tfoot - 300) - (tfoot < 500) * (tfoot - 500)) * 95 + (tfoot > 500) * (tfoot - 500) * 130;

    casing = (cfoot <= 60) * cfoot * 400 + (cfoot > 60) * cfoot * 400;

    int sum = depth + casing;

    printf("Total cost of drilling is %d\n", depth);
    printf("Total cost of casing is %d\n", casing);
    printf("Total cost of drilling and casing is %d\n", sum);

    return 0;
}