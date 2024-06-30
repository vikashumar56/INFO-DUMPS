#include <bits/stdc++.h>
using namespace std;

int sum(int num1, int num2)
{
    int num3 = num1 + num2;
    return num3;
}

void sub(int num3, int num4)
{
    int rs = num3 - num4;
    cout << "Subtraction: " << rs << endl;
}

int mini(int num5, int num6)
{
    if (num5 >= num6)
        return num6;
    else
        return num5;
}

int main()
{
    int num1, num2, num3, num4, num5, num6;
    cin >> num1 >> num2;
    int res = sum(num1, num2);
    cout << "Sum: " << res << endl;

    cin >> num3 >> num4;
    sub(num3, num4);

    cin >> num5 >> num6;
    int mini_val = mini(num5, num6);
    cout << "Minimum: " << mini_val << endl;

    int maxi = max(num5, num6);
    cout << "Maximum: " << maxi << endl;

    return 0;
}
