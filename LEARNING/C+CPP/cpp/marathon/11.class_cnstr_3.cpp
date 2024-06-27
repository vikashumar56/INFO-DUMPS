#include <iostream>
#include <string>

using namespace std;

class CustomClass{
    public:
      /*  CustomClass(){
            cout << "this is the Constructor which is called automatically like this will printed automatically" << endl;

        } */
        CustomClass(string z){
            setName(z);
        }
        void setName(string x){
            name = x;
         }
         string getName(){
            return name;
         }
         private:
         string name;
};

int main()
{
    // CustomClass obj //here this will call the statement automatically as soon as you create the object
    CustomClass obj("Name Surname");
    cout << obj.getName() << endl; //here this will call the statement automatically under the object "obj" and initialize it with syntax "Name Surname".
    CustomClass obj2("Name2 Surname2");
    
    cout <<obj2.getName() <<endl;
    return 0;
}

//Constructor is a function which is called automatically as soon as you create a object. The main usage of a constructor is
//add variables in your class and you want to set them to values initially
