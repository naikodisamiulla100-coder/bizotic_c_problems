#include <stdio.h>
#include <string.h>
union Bankdetail
{
    int accno;
    char name[20];
    float amount;
};
int main()
{
    union Bankdetail b;
    b.accno = 1234;
    b.amount = 56000.20;
    strcpy(b.name, "sami");
    printf("%d %s %.2f", b.accno, b.name, b.amount);
    printf("%d", sizeof(b));
    return 0;
}