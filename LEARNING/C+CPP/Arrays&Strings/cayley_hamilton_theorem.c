#include <stdio.h>
// Verification of Cayley Hamilton Theorem
int main()
{
    int i, j, k, n;
    int Matrices[2][2], a[2][2], b[2][2], c[2][2], d[2][2];
    int I[2][2] = {1, 0, 0, 1};
    int I1[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int y[3][3];

    printf("Enter 1.For 2x2 Matrices \n 2.For 3x3 Matrices \t");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("For 2x2 Matrices \n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("Enter a 2*2  Matrices[%d][%d] \t", i, j);
                scanf("%d", &Matrices[i][j]);
            }
        }
        // Formation of equation...
        //  formation of A^2
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < 2; k++)
                {
                    c[i][j] = c[i][j] + (Matrices[i][k] * Matrices[k][j]);
                }
            }
        }
        // Formation of A
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                a[i][j] = (Matrices[0][0] + Matrices[1][1]) * Matrices[i][j];
            }
        }
        // Formaion of I
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                b[i][j] = (Matrices[0][0] * Matrices[1][1] - Matrices[0][1] * Matrices[1][0]) * I[i][j];
            }
        }
        //   Addition or Subraction of matrices
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                d[i][j] = c[i][j] - a[i][j] + b[i][j];
            }
        }

        //  Checking for Camely Hamilton
        if (d[0][0] == 0 && d[0][1] == 0 && d[1][0] == 0 && d[1][1] == 0)
            printf("The above matrices proves camely hamilton theorem");
        else
            printf("The above matrices doesn't prove Camely hamilton theorem");
        break;

    case 2:
        printf("For 3x3 Matrices");
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("Enter a 3*3 Matrices[%d][%d] \t", i, j);
                scanf("%d", &Matrices[i][j]);
            }
        }
        // Formation of Eqution
        //  A^3-S1A^2+S2A-|A|
        int S1 = Matrices[0][0] + Matrices[1][1] + Matrices[2][2];
        int S2 = ((Matrices[1][1] * Matrices[2][2]) - (Matrices[1][2] * Matrices[2][1])) + ((Matrices[0][0] * Matrices[2][2]) - (Matrices[0][2] * Matrices[2][0])) + ((Matrices[0][0] * Matrices[1][1]) - (Matrices[0][1] * Matrices[1][0]));
        int A = Matrices[0][0] * ((Matrices[1][1] * Matrices[2][2]) - (Matrices[1][2] * Matrices[2][1])) - Matrices[0][1] * ((Matrices[1][0] * Matrices[2][2]) - (Matrices[1][2] * Matrices[2][0])) + Matrices[0][2] * ((Matrices[1][0] * Matrices[2][1]) - (Matrices[1][1] * Matrices[2][0]));

        // Formation of A^3
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < 3; k++)
                {
                    c[i][j] = c[i][j] + (Matrices[i][k] * Matrices[k][j]);
                }
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {

                y[i][j] = 0;
                for (k = 0; k < 3; k++)
                {
                    y[i][j] = y[i][j] + (Matrices[i][k] * Matrices[k][j]);
                }
            }
        }

        // Eqution A^3 A^2 A I
        //   Addition or Subraction of matrices
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                d[i][j] = y[i][j] - S1 * c[i][j] + S2 * b[i][j] - A * I1[i][j];
            }
        }

        //  Checking for Camely Hamilton
        if (d[0][0] == 0 && d[0][1] == 0 && d[1][0] == 0 && d[1][1] == 0)
            printf("The above matrices proves camely hamilton theorem");
        else
            printf("The above matrices doesn't prove Camely hamilton theorem");

        break;
    }
    return 0;
}
