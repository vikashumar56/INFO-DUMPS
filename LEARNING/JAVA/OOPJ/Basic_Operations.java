// HelloWorld.java
public class HelloWorld {
    public static void main(String[] args) {
        System.out.println("Hello");
    }
}

// Bitwise.java
public class Bitwise {
    public static void main(String[] args) {
        int a = 5 << 2;
        int b = 10 >> 2;
        System.out.println("a = " + a);
        System.out.println("b = " + b);
    }
}

// SwapNumbersWithoutTemp.java
public class SwapNumbersWithoutTemp {
    public static void main(String[] args) {
        int num1 = 11;
        int num2 = 12;

        System.out.println("Before swap: num1 = " + num1 + ", num2 = " + num2);

        // Swap numbers without using a third variable
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;

        System.out.println("After swap: num1 = " + num1 + ", num2 = " + num2);
    }
}

// SwapNumbersWithTemp.java
public class SwapNumbersWithTemp {
    public static void main(String[] args) {
        int num1 = 11;
        int num2 = 12;
        int temp;

        System.out.println("Before swap: num1 = " + num1 + ", num2 = " + num2);

        // Swap numbers with using a third variable
        temp = num1;
        num1 = num2;
        num2 = temp;

        System.out.println("After swap: num1 = " + num1 + ", num2 = " + num2);
    }
}

// NumberStar.java
import java.util.Scanner;

public class NumberStar {
    public static void main(String[] args) {
        int position;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter Position: ");
        position = scanner.nextInt();
        scanner.close(); // Close the scanner resource

        for (int i = position; i >= 1; i--) {
            for (int j = position; j >= i; j--) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }
}
