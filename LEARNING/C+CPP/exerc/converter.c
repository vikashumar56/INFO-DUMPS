#include <stdio.h>

int main()
{
    char input;
    float kmsTOMiles = 0.621371;
    float InchesToFoot = 0.0833333;
    float CmsToInches = 0.393701;
    float PoundTOKgs = 0.453592;
    float InchesToMetres = 0.0254;
    float first, second;

    while (1)
    {
        printf("Enter a input Character or Q to quit1. kmsTOMiles \n2. InchesToFoot \n3.CmsToInches \n4.PoundTOKgs \n5.InchesToMetres \n");
        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            goto end;
            break;

        case 1:
            printf("Enter the quantity of first");
            scanf("%f", &first);
            second = first * kmsTOMiles;
            printf("%f KMS to %f MILES", first, second);
            break;

        case 2:
            printf("Enter the quantity of first");
            scanf("%f", &first);
            second = first * InchesToFoot;
            printf("%f INCHES to %f FOOTS", first, second);
            break;
        case 3:
            printf("Enter the quantity of first");
            scanf("%f", &first);
            second = first * CmsToInches;
            printf("%f CMS to %f INCHES", first, second);
            break;
        case 4:
            printf("Enter the quantity of first");
            scanf("%f", &first);
            second = first * PoundTOKgs;
            printf("%f POUNDS to %f KGS", first, second);
            break;
        case 5:
            printf("Enter the quantity of first");
            scanf("%f", &first);
            second = first * InchesToFoot;
            printf("%f INCHES to %f METERS", first, second);
            break;

        default:
            printf("You have entered a wrong choice");
            break;
        }
    }
end:

    return 0;
}
