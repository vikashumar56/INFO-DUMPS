#include <stdio.h>
#define CA1 1000
#define CA2 750
#define CA3 500
#define CA4 250
#define EA1 500
#define EA2 200
#define EA3 100
#define EA4 0

int main()
{
    int level, job_no;
    float gross, basic, perks, house_rent, net, income_tax;

input:
    printf("Enter level, job number , basic pay \t");
    printf("\n Enter zero (0) to end level");
    scanf("%d", &level);
    if (level == 0)
        goto stop;
    scanf("%d %f", &job_no, &basic);
    switch (level)
    {
    case 1:
        perks = CA1 * EA1;
        break;
    case 2:
        perks = CA2 * EA2;
        break;
    case 3:
        perks = CA3 * EA3;
        break;
    case 4:
        perks = CA4 * EA4;
        break;
    default:
        printf("There is Error in level code");
        goto stop;
    }
    house_rent = 0.25 * basic;
    gross = basic + house_rent + perks;
    if (gross <= 2000)
        income_tax = 0;
    else if (gross <= 4000)
        income_tax = 0.03 * gross;
    else if (gross <= 5000)
        income_tax = 0.05 * gross;
    else
        income_tax = 0.08 * gross;

    net = gross - income_tax;
    printf("%d \n %d \n %.2f", level, job_no, net);
    goto input;

stop:
    printf("END OF PROGRAM");

    return 0;
}
