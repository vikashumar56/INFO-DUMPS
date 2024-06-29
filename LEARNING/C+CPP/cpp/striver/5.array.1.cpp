#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[5];
    cin >> arr1[0] >> arr1[1] >> arr1[2] >> arr1[3] >> arr1[4];

    arr1[3] += 10;
    arr1[4] = 10;

    cout << arr1[3] << endl;

    // 2D Array
    int arr2[3][5]; // Array of 15 integers
    srand(time(0)); // seed the random number generator

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr2[i][j] = rand() % 100; // generates a random number between 0 and 99
        }
    }

    cout << arr2[1][3] << endl;

    return 0;
}
