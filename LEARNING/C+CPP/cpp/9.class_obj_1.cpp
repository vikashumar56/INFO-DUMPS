#include <iostream>
using namespace std;

class CustomClass{
    public:
        void hello(){
            cout << "Hello World" <<endl;
        }
};

//the difference between public class and private class is that the former can be accessed in the main and the latter cannot be called in the main

int main()
{
    CustomClass customObject;
    customObject.hello();
    return 0;
}


