
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
 */
