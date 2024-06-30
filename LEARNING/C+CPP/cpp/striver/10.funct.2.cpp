#include <bits/stdc++.h>
using namespace std;

// Pass by value takes a copy of the value and then passes it so the original value remains
//  unchanged
/*
 * Passes a copy of the value, allowing the function to modify the copy instead of the original
 * value. This means that any changes made to the value within the function do not affect the
 * original value.
 */
void passValue(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

// pass by value
void passString(string s)
{
    s[0] = 'S';
    cout << s << endl;
}

// pass by reference takes the original addrress of the value so that values is also changes in main
// function
/*
 * Passes the original address of the value, allowing the function to modify the original value.
 * This is in contrast to pass-by-value, which creates a copy of the value and modifies the copy
 * instead.
 */
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// for arrays always use pass by reference

void passArray(int arr2[], int n)
{
    arr2[0] += 100;
    cout << "Value inside function " << arr2[0] << endl;
}

int main()
{
    // pass by value
    int num = 10;
    passValue(num);
    cout << "Original value: " << num << endl;

    string s = "Vikash";
    passString(s);
    cout << "Original string: " << s << endl;

    int arr1[5];
    for (int i = 1; i <= 5; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 1; i <= 5; i++)
    {
        cout << arr1[i] << " " << endl;
    }

    // pass by reference
    int x = 5;
    int y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    int n = 5;
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    passArray(arr2, n);

    cout << "Value inside main function " << arr2[0] << endl;

    return 0;
}
