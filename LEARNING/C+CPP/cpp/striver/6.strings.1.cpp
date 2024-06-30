#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Vikash";
    cout << s[2] << endl;
    int len = s.size();
    cout << s[len - 1] << endl;
    s[len - 1] = 's';
    cout << s[len - 1] << endl;
    return 0;
}
