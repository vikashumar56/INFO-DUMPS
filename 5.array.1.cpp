#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[5];
    cin >> arr1[0] >> arr1[1] >> arr1[2] >> arr1[3] >> arr1[4];

    arr1[3] += 10;
    arr1[4] = 10;

    cout << arr1[3];

    // 2D Array
    int arr2[3][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr2[i][j] << " " << endl;
        }
    }

    return 0;
}
