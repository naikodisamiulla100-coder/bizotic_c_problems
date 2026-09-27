#include <stdio.h>
#include <string.h>
struct Bankdetail
{
    int accno;
    char name[4];
    float amount;
};
int main()
{
    struct Bankdetail b;
    b.accno = 1234;
    b.amount = 56000.20;
    strcpy(b.name, "sami");
    printf("%d %s %.2f\n", b.accno, b.name, b.amount);
    printf("%d", sizeof(b));
    return 0;
}