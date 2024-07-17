public class Linklist {
    class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    Node head = null;
    Node tail = null;

    void insert(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
        } else {
            tail.next = newNode;
        }
        tail = newNode;
    }

    void printList() {
        Node current = head;
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next;
        }
    }

    boolean search(int data) {
        Node current = head;
        while (current != null) {
            if (current.data == data) {
                return true;
            }
            current = current.next;
        }
        return false;
    }

    int size() {
        int count = 0;
        Node current = head; // Initialize current to head
        while (current != null) {
            count++;
            current = current.next;
        }
        return count;
    }

    public static void main(String[] args) {
        Linklist ll = new Linklist();
        ll.insert(10);
        ll.insert(20);
        ll.printList();
        int size = ll.size(); // Call size() on the instance
        System.out.print(size); // Use System.out instead of system.out
    }
}

// Next code

enum Color {
    RED,
    GREEN,
    BLUE;
}

public class Enumeration {
    public static void main(String[] args) {
        Color c1 = Color.RED;
        System.out.println(c1);
    }
}

// Next code

class Main { // StringBuffer
    public static void main(String args[]) {
        StringBuffer sc = new StringBuffer("Initial String");
        sc.append("\nfinal changed string"); // now original string is changed
        System.out.println(sc);
    }
}

// Next code

import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("What is your name?");
        String name = sc.nextLine();
        System.out.println("Did you entered this \"" + name.toUpperCase() + "\" ?");
        int size = name.length();
        System.out.println("Length of your entered string is: " + size);
        System.out.println("First character is: " + name.charAt(0));
        System.out.println("Last Charcter is: " + name.charAt(size - 1));
        System.out.println("Character in Small Letter: " + name.toLowerCase());
        System.out.println("Character in Capital Letter: " + name.toUpperCase());
    }
}
