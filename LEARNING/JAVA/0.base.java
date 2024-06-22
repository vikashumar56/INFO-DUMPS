
class base {

    public static void main(String[] args) {
        //Your Code here
    }
}

//Function = block of code that performs a task
//Class = Container for one or more related function
//Method = Function which is part of a class
//Access modifier = if other classes or methods can access these classes or not
//PascalNamingConvention = Classes use this
//camelNamingConvention = Methods use this
//Code -> Compiler -> ByteCode -> JRE -> Native Code -> Output

/*
James Gosling 1995 at Sun Microsystems and later
acquired by Oracle in 2010, Oak after oak tree
outside office and later java after java coffee.
 */
//Types

/*
Primitive data type: store simple values, and dont have any members in it contrast to reference
        byte age = 30;
        long viewsCount = 3_123_456_789L
        float price = 10.99F
        char letter = 'A'
        boolean isEligible = false
        short year = 2022
        int x = 10
        double gpa = 3.7

 */

 /*
Reference data type: to store complex objects like data, mail messages.
        Date now = new Date();
        now.getTime()
        String message = new String("Hello World")
        String message = "Hello World" + "!!";
        System.out.println(message...)
                                .toUpperCase()
                                .lengthOf("")
                                .indexOf("")
                                ...any many more
        now this ability of accessing members is
        called encapsulation and only possible in
        reference data type.
 */

 /*
Escape Sequences
 */

 /*
Arrays = to store a list of number or people or anything
    int[] scores = new int[5];
    scores[0] = 90;
    scores[1] = 80;
Or
    int[] scores = {2,3,5,1,4};
    System.out.println(scores.length);
    Arrays.sort(scores); - now this here directly sorts our numbers in the array

    System.out.println(Arrays.toString(scores));

Multi-dimensional Array
    int[][] scores = new int[2][3];
    scores[0][0] = 1;
    scores[0][1] = 2;
Or
    int[][] scores = {{1,2,3},{4,5,6}};
    System.out.println(scores.length);
    System.out.println(Arrays.deepToString(scores));
 */

/*
Constants
    final float PI = 3.14F; - now further in the program we cannot assign any new value to PI(these are represented in ALL CAPS)
 */
/*
Arithmetic Expressions - Piece of code that produces a value
    int result = 10 / 3 - result in a whole number
Or
    double result = (double)10 / (double)3 - results upto a decimal number

Increment i.e. x++ or ++x
int x = 1;
int y = x++;
int z = ++x;
System.out.println(x); - produces 1
System.out.println(y); - produces 1 - because first it assign the x value to the y variable and then increments it
System.out.println(z); - produces 2 - in this it first increments the value of x and then assigns it to z
x = x + 2; or x+=2; - both are same but in the latter since the operators are combined they are called Augmented or Compounded Operators
*/

/*
TypeCasting
    short x = 1;
    int y = x + 2; - this is called widening
    primitive conversion or Implicit casting or
    Automatic Casting without losing any data so
    byte can automatically be converted to
    short > int > long > float > double
    boolean cannot be converted to any other primitive type
    double x = 1.1;
    int y = (int)x + 2; - this is called narrowing
    explicit casting or manual casting

    String x = "1";
    int y = Integer.parseInt(x) + 2; - this is called parsing
    String x = "1.1";
    double y = Double.parseDouble(x) + 2; - this is for double
    And Similarly there are many other for boolean,
    byte, short, long, float


*/
