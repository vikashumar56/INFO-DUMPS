#include <stdio.h>
#include <conio.h>
#define Base_Salary 1500.00
#define Bonus_Rate 200.00
#define COMISSION 0.02
int main()
{
    int quantity;
    float gross_salary, price;
    float bonus, comission;
    printf("The no of inputs solds and price \n");
    scanf("%d %f", &quantity, &price);
    bonus = Bonus_Rate * quantity;
    comission = COMISSION * quantity * price;
    gross_salary = Base_Salary + bonus + comission;
    printf("\n Bonus=%7.3f", bonus);
    printf("\n Comission=%7.3f", comission);
    printf("\n Gross salary=%7.3f", gross_salary);
    return 0;
}
