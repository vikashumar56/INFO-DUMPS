#include <iostream>
using namespace std;

int addNumbers(int x, int y);

int main() {
    cout << addNumbers(45,65); //simply writing addNumbers won't display the addition so we have to put cout so we can print the output
    return 0;
}

int addNumbers(int x,int y) {
    int answer = x+y;
    return answer;
}
