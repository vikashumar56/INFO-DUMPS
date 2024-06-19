#include <iostream>
#include <string>
using namespace std;

//First lets learn the wrong way about variables in classes
/*
class CustomClass{
    public;
    string name;
};

int main()
{
    CustomClass CustomObject;
    CustomObject.name = "Hello world
    cout <<"Hello World" <<endl;
    return 0;
}

now the thing is that we can relate variables to like user sensitive data. so this means that this should not be in the public class and instead should be in private
*/

//Now lets learn the right way about variables in classes
/*
class CustomClass{
    private:
        string name;
};
*/
/*Now remember that when set the class to private we can't access it in the main function so the below is not useful

int main()
{
    CustomClass CustomObject;
    CustomObject.name="Name Surname";
    cout << CustomObject.name;
    return 0;
}
*/
//So we need to create a sort of way around by creating a new public function so that it can access the private variable in the class

class CustomClass{
    public:
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
    CustomClass CustomObject;
    CustomObject.setName("Name Surname");
    cout << CustomObject.getName();
    return 0;
}
