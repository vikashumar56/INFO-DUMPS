#include <bits/stdc++.h>
using namespace std;

int main() {
    //For loop
    int i;
    for(i = 0; i <= 24; i+=4) //i+= means "add and assign". It adds the value on the right to the
    //variable on the left and assigns the result back to the variable on the left.
    {
        cout << "Vikash" << i << endl;
    }
    cout << i << endl;

    //While loop
    int j = 1;
    while(j <= 5) {
        cout << "Vikash" << j << endl;
        j++;
    }
    cout << j << endl;

    //Do while loop
    int k = 2;
    do {
        cout << "Vikash" << k << endl;
        k++;
    } while(k<=1);
    cout << k << endl;


    return 0;
}
