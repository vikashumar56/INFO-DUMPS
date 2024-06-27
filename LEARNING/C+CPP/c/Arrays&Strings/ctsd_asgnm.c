#include<stdio.h>

int AddArray(int Arr[], int m)
{
    int n, j, i, size;
    printf("Enter the no of elements you want to add \t ");
    scanf("%d", &n);
    int a[100];
    printf(" \n Enter the elements you want to add \t ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d \t ", &a[i]);
    }
    // Merging of Array
    size = m + n;
    int c[size];
    for (i = 0; i < m; i++)
    {
        c[i] = Arr[i];
    }

    for (i = 0, j = m; i < n && j < size; i++, j++)
    {
        c[j] = a[i];
    }

    printf(" \n Element after modification \n");

    for (i = 0; i < size; i++)
    {
        printf("%d \t", c[i]);
    }
}

int indexDel(int Arr[], int m)
{
    int p, i;
    printf("Enter the index no of element which you want to remove \t");
    scanf("%d", &p);
    for (i = p; i <= m - 1; i++)
        Arr[i] = Arr[i + 1];
    printf("Array after Deletion of element \n");
    for (i = 0; i < m - 1; i++)
    {
        printf("%d \t ", Arr[i]);
    }
}

int groupDel(int Arr[], int m)
{
    int p, r, i, size;
    printf("Enter the index value from where you want to delete elements in array");
    scanf("%d %d", &p, &r);
    size = r - p;
    for (i = p; i <= r; i++)
    {
        Arr[i] = Arr[m + 1];
    }
    printf("Array after Deletion of element \n");
    for (i = 0; i < size; i++)
    {
        printf("%d \t ", Arr[i]);
    }
}

int DeleteArray(int Arr[], int m)
{
    int n;
    printf("Choose one of the following:");
    printf("\n 1.Deletion of specific element");
    printf("\n 2. Deletion of group of elements \t");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        indexDel(Arr, m);
        break;

    case 2:
        groupDel(Arr, m);
        break;

    default:
        printf("\n <=== ERROR ===>");
    }
}

int indexUpd( int Arr[],int m)
{
 int p, i,x;
    printf("\n Enter the index no of element at which you want to update \t");
    scanf("%d", &p);
    printf("\n Enter the number you want to update in element \t");
    scanf("%d",&x);
    for (i = p; i <= p; i++)
        Arr[i] = x;
    printf("Array after Updation of element \n");
    for (i = 0; i < m ; i++)
    {
        printf("%d \t ", Arr[i]);
    }
}

int groupUpd(int Arr[],int m)
{
   int p, r, i, size,j;
   int x[100];
    printf("Enter the index value from where you want to update elements in array");
    scanf("%d %d", &p, &r);
     size = (r - p)+1;
    printf("\n Enter the numbers you want to update \t");
    for ( i = 0; i <= size; i++)
    {
        scanf("%d",&x[i]);
    }
    for ( i = p, j=0; i <= r, j < r; i++, j++)
    {
        Arr[i]=x[j];
    }

    printf("Array after Deletion of element \t ");
    for (i = 0; i < m; i++)
    {
        printf("%d \t ", Arr[i]);
    }

}

int UpdateArray(int Arr[], int m)
{
    int n;
    printf("Choose one of the following:");
    printf("\n 1.Updation of specific element");
    printf("\n 2.Updation of group of elements \t");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        indexUpd(Arr, m);
        break;

    case 2:
        groupUpd(Arr, m);
        break;

    default:
        printf("\n <=== ERROR ===>");
    }
}

// Driver code
int main()
{
    int m, x;
    int Arr[100];
    printf("Enter the size of array \t ");
    scanf("%d", &m);
    printf(" \n Enter the array \t ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &Arr[i]);
    }
    printf("\n Array before modification \t");
    for (int i = 0; i < m; i++)
    {
        printf("%d \t ", Arr[i]);
    }
    printf("\n \n");
    printf("Enter 1.Addition of Array");
    printf("\n 2.Deletion of Array");
    printf("\n 3.Updation of array \t ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        AddArray(Arr, m);
        break;

    case 2:
        DeleteArray(Arr, m);
        break;

    case 3:
        UpdateArray(Arr, m);
        break;

    default :
         printf("\n <=== ERROR ===>");
    }

    return 0;
}
