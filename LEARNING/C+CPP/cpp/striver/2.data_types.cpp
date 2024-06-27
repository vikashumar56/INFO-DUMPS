#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 10;

    long y = 15;

    long long z = 1500000;

    float a = 5.6, b = 5;

    cout << "Value of: x = " << x << ", y = " << y << ", z = " << z << ", a = " << a
         << ", b = " << b << endl;

    string s1;
    string s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2;
    /*now if the value of s1 is two words in the line then it will only pickup one word because
     * string picks up only the string which is before space */
    /*so to pick up the whole string we use getline() function*/
    string vkr;
    getline(cin, vkr);
    cout << vkr << endl;

    char ch;
    cin >> ch;
    cout << ch;

    return 0;
}
