#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

struct node *head = NULL;

void insertBegin(int val){
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  new_node->data = val;
  if(head == NULL){
    head = new_node;
    printf("%d is inserted!\n", val); 
  }
  else{
    new_node->next = head;
    head = new_node;
    printf("%d is inserted!\n", val); 
  }
  }
  
void insertEnd(int val){
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  struct node *temp = head;
  new_node->data = val;
  while(temp->next != NULL){
    temp = temp->next;
  }
  temp->next = new_node;
  printf("%d is inserted!\n", val);
}

void insertSpecific(int pos, int val){
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    int i = 1;
    new_node->data = val;
    while(i<pos){
        temp = temp->next;
        i++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    printf("%d is inserted!\n", val);
}

int delete(int pos){
    struct node *temp = head;
    struct node *pre = NULL;
    int val;
    int i = 1;
    if(pos == 1){
        val = temp->data;
        head = temp->next;
        free(temp);
        printf("%d deleted!\n", val);
        return val;
    }
    while(temp != NULL && i<pos){
        pre = temp;
        temp = temp->next;
        i++;
    }
    val = temp->data;
    pre->next = temp->next;
    free(temp);
    printf("%d deleted!\n", val);
    return val;
}

void search(int val){
    struct node *ele;
    int i = 0;
    ele = head;
    while(ele != NULL){
        if(ele->data == val){
            printf("Value %d is found at location %d location.\n", val, i+1);
        }
        i++;
        ele = ele->next;
    }
}

void display(){
    struct node *ptr;
    ptr = head;
    while(ptr != NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

void reverse(){
    struct node *temp = NULL;
    struct node *pre = NULL;
    struct node *curr = head;
    while(curr != NULL){
        temp = curr->next;
        curr->next = pre;
        pre = curr;
        curr = temp;
    }
    head = pre;
    printf("After reversing:\n");
    display();
}

int main(){
  insertBegin(400);
  insertEnd(100);
  insertSpecific(1,550);
  insertSpecific(2,250);
  insertSpecific(3,120);
  insertSpecific(4,678);
  insertSpecific(5,456);
  delete(1);
  delete(2);
  delete(3);
  insertSpecific(2,295);
  search(12);
  display();
  reverse();
  return 0;
}
