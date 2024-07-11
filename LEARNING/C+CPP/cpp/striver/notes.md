### Explanation of Input Validation and Error Handling

When I mentioned that the program does not perform any error checking on user input, I meant that it assumes the user will always provide valid input in the correct format. However, in reality, users can make mistakes, so it's essential to handle such situations gracefully.

#### Issues with the Current Implementation

- **Invalid Input Type**: The program expects the user to enter integer values. If the user enters a non-integer value (e.g., a string or a floating-point number), the program will behave unexpectedly. This can lead to crashes, incorrect results, or infinite loops.

- **Out-of-Range Values**: The program doesn't verify if input values are within a valid range. For instance, very large or very small integer inputs might disrupt the program's logic or cause overflow errors.

- **Insufficient Input**: The program anticipates a specific number of values (5 for the 1D array and 15 for the 2D array). If the user enters fewer values than expected, the program will either indefinitely wait for additional input or crash.

#### Recommendations for Improvement

To address these issues, implement input validation and error handling mechanisms within your program. Here are some effective strategies:

### Input Validation Techniques

- **Using `cin.fail()`**: Check if the input operation fails using `cin.fail()`. If true, clear the error flag with `cin.clear()` and prompt the user to re-enter the input.

- **Employing `cin.good()`**: Verify if the input operation was successful with `cin.good()`. If false, prompt the user to retry entering the input.

- **Utilizing `std::getline()`**: Read input as a string using `std::getline()` and subsequently parse the string to extract the desired input type (e.g., integer).

- **Using `std::stoi()` or `std::stol()`**: Convert a string to an integer using these functions and handle any exceptions that may occur during the conversion process.

### Example Implementation

```cpp
int value;
while (!(cin >> value)) {
    cout << "Invalid input. Please enter an integer value: ";
    cin.clear(); // Clear error flag
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore remaining input
}
```

By incorporating these input validation and error handling techniques, your program will become more robust and user-friendly.

### Error Notification

```
In function ‘int mini(int, int)’:
jspwTest.cpp:17:1: warning: control reaches end of non-void function [-Wreturn-type]
   17 | }
```



### Example 19: Hollow Diamond Pattern

**Output:**
```
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
```
**Evaluate:**
Here we observe that:

- In the 0th row, we are printing 5 '*', 0 spaces, and again 5 '*'.
- In the 1st row, we are printing 4 '*', 2 spaces, and again 4 '*'.
- In the 2nd row, we are printing 3 '*', 4 spaces, and again 3 '*'.
- In the 3rd row, we are printing 2 '*', 6 spaces, and again 2 '*'.
- In the 4th row, we are printing 1 '*', 8 spaces, and again 1 '*'.

1. How many rows are there? 2n (in this case, 10)
2. How many columns are there? 2n (in this case, 10 in each row)
3. What is the pattern? Hollow diamond pattern
4. What is the symmetry? Vertically and horizontally symmetric

Additional Observations:

From the first look, we can observe that this is a mirrored set. Let's analyze the first set:

- The outer loop runs for n times.
- We will be printing stars, spaces, and stars again.
- For the stars, we print n - i stars.
- For the spaces, we start with 0 spaces and increment by 2 for every row.
- After the spaces, we print n - i stars again.

That's the first half. Now, for the second half, which is the mirror of the above:

- In the 5th row, we are printing 1 '*', 8 spaces, and again 1 '*'.
- In the 6th row, we are printing 2 '*', 6 spaces, and again 2 '*'.
- In the 7th row, we are printing 3 '*', 4 spaces, and again 3 '*'.
- In the 8th row, we are printing 4 '*', 2 spaces, and again 4 '*'.
- In the 9th row, we are printing 5 '*', 0 spaces, and again 5 '*'.

So, again, we will be printing stars, spaces, and stars:

- For the stars, we print i stars.
- For the spaces, we start with 8 spaces and decrement by 2 for every row.
- After the spaces, we print i stars again.

**Code:**
```
void hollowDiamondPattern(int n) {
    int space = 0;

    // First set
    for (int i = 0; i < n; i++) {
        // stars
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < space; j++) {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        space += 2;
        cout << endl;
    }

    // Second set
    space = 2 * n - 2;
    for (int i = 1; i <= n; i++) {
        // stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // spaces
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        space -= 2;
        cout << endl;
    }
}
// Alternative implementation
void hollowDiamondPattern(int n) {
    // First set
    for (int i = 0; i < n; i++) {
        // stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }

        // stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Second set
    for (int i = n - 1; i >= 0; i--) {
        // stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }

        // stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
```

### Example 20: X-Wing Pattern (Similar to Example 10.1)

**Output:**
```
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
```

**Evaluate:**

This pattern is a variation of Example 10.1, where the spaces between the stars are variable. The number of spaces equals the number of stars on the opposite side.

Here we observe that:

- In the 0th row, we are printing 1 '*', 8 spaces, and again 1 '*'
- In the 1st row, we are printing 2 '*', 6 spaces, and again 2 '*'
- In the 2nd row, we are printing 3 '*', 4 spaces, and again 3 '*'
- In the 3rd row, we are printing 4 '*', 2 spaces, and again 4 '*'
- In the 4th row, we are printing 5 '*', 0 spaces, and again 5 '*'
- In the 5th row, we are printing 4 '*', 2 spaces, and again 4 '*'
- In the 6th row, we are printing 3 '*', 4 spaces, and again 3 '*'
- In the 7th row, we are printing 2 '*', 6 spaces, and again 2 '*'
- In the 8th row, we are printing 1 '*', 8 spaces, and again 1 '*'

1. How many rows are there? 2n-1 (in this case, 9)
2. How many columns are there? 2n (in this case, 10 in the widest row)
3. What is the pattern? X-Wing pattern
4. What is the symmetry? Vertically and horizontally symmetric

Additional Observations: From the start, we can see that the outer loop runs for exactly 2n-1 times, and the number of stars printed is directly related to the row number until the pivot point after the 5th row (or 4th row if i=0). There is a pivot where the space starts to increase, and the stars start to decrease at the rate of 2n-1.

Implementation: To implement this pattern, we can follow these steps:

1. The outer loop runs for 2n-1 rows.
2. For the first n rows (the upper half):
    - Print i + 1 stars.
    - Print spaces, starting from 2n - 2i - 2 and decrementing by 2 for each row.
    - Print i + 1 stars again.
3. For the remaining n-1 rows (the lower half):
    - Print 2n - i - 1 stars.
    - Print spaces, starting from 2i - 2n + 2 and incrementing by 2 for each row.
    - Print 2n - i - 1 stars again.

**Code:**
```
void xWingPattern(int n) {
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i <= n ? i : 2 * n - i;
        // stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        // spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
        if (i < n) spaces -= 2;
        else spaces += 2;
    }
}
// Alternative implementation
void xWingPattern(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {
        int stars = i < n ? i + 1 : 2 * n - i - 1;
        int spaces = 2 * (n - stars);

        // stars
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        // stars
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        cout << endl;
    }
}
```

### Example 21: Hollow Square Pattern

**Output:**
```
****
*  *
*  *
****
```

**Evaluate:**
Here we observe that:

- In the 0th row and the 3rd row, we are printing 4 '*'.
- In the 1st row and the 2nd row, we are printing 1 '*', 2 spaces, and again 1 '*'.

1. How many rows are there? n (in this case, 4)
2. How many columns are there? n (in this case, 4)
3. What is the pattern? Hollow square pattern
4. What is the symmetry? Vertically and horizontally symmetric

Additional Observations: From the first look, we can clearly see that it is a square-shaped pattern, which means the stars are only printed at the boundary. They start from 0 and go till n-1 for both columns and rows.

Implementation: To implement this pattern, we can follow these steps:

1. The outer loop runs for n rows.
2. For each row i:
    - If it is the first row (i == 0) or the last row (i == n - 1), we print n '*'.
    - Otherwise, we print 1 '*', followed by n - 2 spaces, and then another '*'.

**Code:**
```
void hollowSquarePattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
```


### Example 22: Numeric Diamond Pattern

**Output:**
```
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
```

**Evaluate:**
Here we observe that:

- In the 0th row and the 6th row, we are printing 7 '4's.
- In the 1st row and the 5th row, we are printing 5 '3's surrounded by '4's on both sides.
- In the 2nd row and the 4th row, we are printing 3 '2's surrounded by '3's and '4's on both sides.
- In the 3rd row, we are printing 1 '1' surrounded by '2's, '3's, and '4's on both sides.

1. How many rows are there? 2n-1 (in this case, 7)
2. How many columns are there? 2n-1 (in this case, 7)
3. What is the pattern? Numeric diamond pattern
4. What is the symmetry? Vertically and horizontally symmetric

Additional Observations: This pattern is a numeric variation of the "Hollow Diamond Pattern" (Example 19). Instead of printing stars and spaces, we are printing numbers in a specific pattern:

- The outermost elements are always '4'.
- The next inner elements are '3', and their count decreases as we move towards the center.
- The innermost element is '1', surrounded by '2's.

Implementation: To implement this pattern, we can follow a similar approach to the "Hollow Diamond Pattern," but with some modifications:

1. The outer loop runs for 2n-1 rows.
2. For each row i:
    - Calculate the starting number as min(4, n - abs(n - 1 - i)).
    - Print numbers from the starting number to 4, then from 3 back to the starting number.

**Code:**
```cpp
void numericDiamondPattern(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {
        // Upper half
        if (i < n) {
            for (int j = 0; j < n - i; j++) {
                cout << "4";
            }
            for (int j = 0; j < i; j++) {
                cout << "3";
            }
            for (int j = 0; j < n - i; j++) {
                cout << "4";
            }
        }
        // Lower half
        else {
            int j;
            for (j = 0; j < i - n + 1; j++) {
                cout << "4";
            }
            for (j = 0; j < 2 * n - 2 * i; j++) {
                cout << "3";
            }
            for (j = 0; j < i - n + 1; j++) {
                cout << "4";
            }
        }
        // Middle row
        if (i == n - 1) {
            for (int j = 0; j < n; j++) {
                cout << "2";
            }
            for (int j = 0; j < n - 1; j++) {
                cout << "3";
            }
            for (int j = 0; j < n - 1; j++) {
                cout << "3";
            }
        }
        cout << endl;
    }
}
//OR
    for (int i = 0; i < 2 * n - 1; i++) {
        int start = min(4, n - abs(n - 1 - i));
        for (int j = start; j <= 4; j++) {
            cout << j << " ";
        }
        for (int j = 3; j >= start; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}
```
