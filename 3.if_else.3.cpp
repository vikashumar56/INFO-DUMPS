#include <bits/stdc++.h>
using namespace std;

/*
Take the age from the user and then decide accordingly
1.  if age < 18
    print not eligible for job
2.  if age >= 18 and age <= 54
    print eligible for job
3.  if age >= 55 and age <= 57
    print eligible for job but retiremnt soon
3.1 or instead of two different steps use nested if combine step 2 and 3
4.  if age > 57
    print retirement time
*/

int main()
{
    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "Not eligible for job";
    }
    else if (age <= 57)
    {
        cout << "Eligible for job";
        if (age >= 54)
        {
            cout << " but retirement soon";
        }
    }
    // else if (age <= 57)
    // {
    //     cout << "eligible for job but retirement soon";
    // }

    else
    {
        cout << "retirement time";
    }
    return 0;
}
