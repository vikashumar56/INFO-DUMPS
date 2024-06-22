
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
    byte, short, long, float, double
*/

/*
Math class
Math.abs(-5) - returns absolute value
Math.max(5,10) - returns maximum value
Math.min(5,10) - returns minimum value
Math.pow(2,3) - returns 2 to the power of 3
Math.sqrt(16) - returns square root of 16

Math.random() - returns a random number between 0 and 1 - in this we have to assign the value it results to a double or float variable not int
Or
int result = (int) (Math.random() * 100);
System.out.println(result); - this will give a random number between 0 and 99

Math.round(5.7) - returns the nearest integer
Math.ceil(5.7) - returns the smallest integer that is greater than or equal to the argument
Math.floor(5.7) - returns the largest integer that is less than or equal to the
*/

/*
String class
String x = "Hello";
String y = "Hello";
System.out.println(x == y); - returns true because they are pointing to the same memory location
String x = new String("Hello");
String y = new String("Hello");
System.out.println(x == y); - returns false because they are pointing to different memory locations
System.out.println(x.equals(y)); - returns true because they have the same value
String x = "Hello";
String y = x;
System.out.println(x == y); - returns true because they are pointing to the same memory location
String y = x.toUpperCase();
System.out.println(y); - returns "HELLO"
String y = x.concat("World");
System.out.println(y); - returns "HelloWorld"
String y = x.substring(2);
System.out.println(y); - returns "llo"

*/

/*
Formatting Numbers
    NumberFormat currency = new NumberFormat(); - now this line is not correct since "NumberFormat" is a ABSTRACT so we cannot
    create any new instance out of it instead we write
    NumberFormat currency = NumberFormat.getCurrencyInstance();
    String result = currency.format(number: 123.46);
Or
    String result = NumberFormat.getPercentInstance().format(number: 0.1);
Or
    String result = NumberFormat.getIntegerInstance().format(number: 123);

    Now Similar to NumberFormat we have another abstract i.e. DecimalFormat

    DecimalFormat decimalFormat = new DecimalFormat("#.##"); - this will format the number to have at most two decimal places
    String result = decimalFormat.format(number: 123.456);
    System.out.println(result); - returns "123.46"
*/

/*
Reading Input

