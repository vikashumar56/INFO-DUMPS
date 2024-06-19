#include <iostream>

using namespace std;

void hello(); /*prototyping function the usecase
of this here is that if we do not tell the
 program about the function before it is called
  then it might lead to an "scope error". now
  there are two ways to resolve this error the
   simple one is two introduce the function in
   detail before the "main" function or the most
   efficient way is to just tell the program
   before the main function that there is a
   function somewhere in the code which will be
   used in the program now that is called 
   prototyping */

int main()
{
    hello();
    return 0;
}

void hello(//parametres here){
    cout << "Hello world" <<endl;
}
