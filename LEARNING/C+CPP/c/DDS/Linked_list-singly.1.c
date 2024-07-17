#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void insertBegin(struct node** head, int data) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertEnd(struct node** head, int data) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void insertSpecific(struct node** head, int data, int position) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;

    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
    } else {
        struct node* temp = *head;
        int currentPosition = 1;

        while (temp != NULL && currentPosition < position - 1) {
            temp = temp->next;
            currentPosition++;
        }

        if (temp != NULL) {
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
}

int searchNode(struct node* head, int data) {
    int position = 1;
    struct node* temp = head;

    while (temp != NULL) {
        if (temp->data == data) {
            return position;
        }
        temp = temp->next;
        position++;
    }

    return -1;
}

void printList(struct node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void deleteNode(struct node** head, int position) {
    struct node* temp = *head;
    int currentPosition = 1;

    if (position == 1) {
        int var = temp->data;
        *head = temp->next;
        free(temp);
        printf("%d deleted\n", var);
    } else {
        while (temp != NULL && currentPosition < position - 1) {
            temp = temp->next;
            currentPosition++;
        }

        struct node* next = temp->next->next;
        int var = temp->next->data;
        free(temp->next);
        temp->next = next;
        printf("%d deleted\n", var);
    }
}

void reverseList(struct node** head) {
    struct node* prev = NULL;
    struct node* current = *head;
    struct node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

int main() {
    struct node* head = NULL;

    // Inserting nodes
    insertBegin(&head, 500);
    insertBegin(&head, 2);
    insertBegin(&head, 300);
    insertBegin(&head, 40);
    insertBegin(&head, 60);

    printf("Original list: ");
    printList(head);

    insertEnd(&head, 80);

    printf("List after inserting at the end: ");
    printList(head);


    insertSpecific(&head, 700, 3);
    printf("List after inserting at a specific position: ");
    printList(head);
    
    
    int searchData;
    printf("Enter a number to search: ");
    scanf("%d", &searchData);

    int position = searchNode(head, searchData);
    if (position != -1) {
        printf("Node with data %d found at index %d\n", searchData, position);
    } else {
        printf("Node with data %d not found\n", searchData);
    }


    deleteNode(&head, 4);
    printf("List after deletion: ");
    printList(head);


    reverseList(&head);
    printf("Reversed list: ");
    printList(head);




    return 0;
}
