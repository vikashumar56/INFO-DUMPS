#include <bits/stdc++.h>
using namespace std;

/*
school has follwing rules for grading system:
Below 25 F
25 to 44 E
45 to 49 D
50 to 59 C
60 to 79 B
80 to 100 A
Ask user to enter marks and print the corressponding marks
*/
// Approach - 1 - consumes too much memory
int main()
{
    int marks;
    cin >> marks;

    if (marks < 25)
    {
        cout << "F";
    }
    if (marks >= 25 && marks <= 44)
    {
        cout << "E";
    }
    if (marks >= 45 && marks <= 49)
    {
        cout << "D";
    }
    if (marks >= 50 && marks <= 59)
    {
        cout << "C";
    }
    if (marks >= 60 && marks <= 79)
    {
        cout << "B";
    }
    if (marks >= 80 && marks <= 100)
    {
        cout << "A";
    }

    return 0;
}

// Approach - 2
int main()
{
    int marks;
    cin >> marks;

    if (marks < 25)
    {
        cout << "F";
    }
    else if (marks <= 44)
    {
        cout << "E";
    }
    else if (marks <= 49)
    {
        cout << "D";
    }
    else if (marks <= 59)
    {
        cout << "C";
    }
    else if (marks <= 79)
    {
        cout << "B";
    }
    else if (marks <= 100)
    {
        cout << "A";
    }

    return 0;
}
