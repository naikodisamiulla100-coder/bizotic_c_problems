#include <stdio.h>
int main()
{
    int units, sanctioned_load, maximum_load;
    float power_factor;
    scanf("%d %d %f", &units, &sanctioned_load, &power_factor);
    double electricity_charge = units * 6.40;
    double Demand_charge = (((maximum_load > sanctioned_load) * maximum_load * 0.75) * 210) + ((maximum_load <= sanctioned_load) * maximum_load * 210);
    int steps = (int)((power_factor - 0.95) / 0.01);
    double power_factor_adjustment = -(electricity_charge * 0.5 / 100);
    double totalBill = electricity_charge + Demand_charge + power_factor_adjustment;
    printf("Energy chatge:%.2f", electricity_charge);
    printf("Demand_charge:%.2f", Demand_charge);
    printf("Power factor adjustment:%.2f", power_factor_adjustment);
    printf("Total bill:%.2f", totalBill);
    return 0;
}