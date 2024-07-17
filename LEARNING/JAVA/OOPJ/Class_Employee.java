import java.util.Scanner;

class Employee {
    String name;
    long mobileNumber;

    void accept() {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter Employee Name: ");
        name = scanner.nextLine();

        System.out.print("Enter Mobile Number: ");
        mobileNumber = scanner.nextLong();
        scanner.nextLine(); // consume newline left-over
    }

    void display() {
        System.out.println("Employee Details:");
        System.out.println("Employee Name: " + name);
        System.out.println("Mobile Number: " + mobileNumber);
    }

    public static void main(String[] args) {
        Employee employee = new Employee();

        employee.accept();
        employee.display();
    }
}
