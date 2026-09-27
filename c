#include <stdio.h>
#include <math.h>
double doseForPlot(double areaHa, double rateperHa);
double bagneeded(double quantitykg, double bagsizekg);
double doseForPlot(double areaHa, double rateperHa)
{
    return areaHa * rateperHa;
}
double bagneeded(double quantitykg, double bagsizekg)
{
    return ceil(quantitykg / bagsizekg);
}
int main()
{
    double area, rate, bagsize, dose, bags;
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter area, rate and bag size for plot %d: ", i);
        scanf("%lf %lf %lf", &area, &rate, &bagsize);

        dose = doseForPlot(area, rate);
        bags = bagsNeeded(dose, bagsize);

        printf("Dose = %.2lf kg\n", dose);
        printf("Bags = %.0lf\n\n", bags);
    }
    return 0;
}