//Doubly Linked List

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head = NULL;

void insertAtBeginning(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    if(head == NULL) {
        head = newNode;
        printf("%d is inserted\n", val);
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        printf("%d is inserted\n", val);
    }
}

void insertAtEnd(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = head;
    newNode->data = val;
    if(head == NULL) {
        head = newNode;
        printf("%d is inserted\n", val);
    } else {
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        printf("%d is inserted\n", val);
    }
}

void insertAtSpecific(int val, int pos) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = head;
    newNode->data = val;
    if(pos == 1) {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        printf("%d is inserted at %d\n", val, pos);
    } else {
        int i = 1;
        while(i < pos) {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
        printf("%d is inserted at %d\n", val, pos);
    }
}

int main() {
    insertAtBeginning(300);
    insertAtBeginning(400);
    insertAtEnd(400);
    insertAtSpecific(200,2);
    return 0;
}

//Singly Linked List

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insertAtSpecific(int val, int pos) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        struct Node* temp = head;
        int i = 1;
        while (temp!= NULL && i < pos) {
            temp = temp->next;
            i++;
        }
        if (temp == NULL) {
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void printList() {
    struct Node* temp = head;
    while (temp!= NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    insertAtSpecific(10, 1);
    insertAtSpecific(20, 2);
    insertAtSpecific(30, 3);
    insertAtSpecific(40, 4);
    insertAtSpecific(50, 5);
    printList();
    return 0;
}
