//Queue Implementation

#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int front, rear, size, capacity;
    int *arr;
};

int isEmpty(struct Queue* queue) {
    if(queue->size == 0)
        return 1;
    else
        return 0;
}

int isFull(struct Queue* queue) {
    if (queue->size == queue->capacity)
    return 1;
    else
    return 0;
}

void enqueue(struct Queue* queue, int val) {
    if (isFull(queue)) {
        printf("Queue is full\n");
        return;
    }
    else {
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->arr[queue->rear] = val;
    queue->size++;
    printf("Value %d is inserted\n", val);
    }
}

int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    }
    else {
    int val = queue->arr[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size--;
    printf("Value %d is deleted\n", val);
    return val;
    }
}

void traverse(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }
    int i = queue->front;
    for (int j = 0; j < queue->size; j++) {
        printf("Value at index %d is %d\n", j, queue->arr[i]);
        i = (i + 1) % queue->capacity;
    }
}

int main() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity = 100;
    queue->front = queue->size = 0;
    queue->rear = queue->capacity - 1;
    queue->arr = (int*)malloc(queue->capacity * sizeof(int));
    enqueue(queue, 100);
    enqueue(queue, 200);
    enqueue(queue, 300);
    enqueue(queue, 400);
    enqueue(queue, 500);
    enqueue(queue, 600);
    enqueue(queue, 700);
    dequeue(queue);
    dequeue(queue);
    traverse(queue);


    return 0;
}


/*
Using Queue
river both side building, building hieght vairable, 
Input:  array given and in array height of building given, 
Condition: the building can only see the river view if the building infront has a smaller height then it.
Output: index of building which will be able to see the river view
*/

#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int front, rear, size, capacity;
    int *arr;
};

int isEmpty(struct Queue* queue) {
    if(queue->size == 0)
        return 1;
    else
        return 0;
}

int isFull(struct Queue* queue) {
    if (queue->size == queue->capacity)
    return 1;
    else
    return 0;
}

void enqueue(struct Queue* queue, int val) {
    if (isFull(queue)) {
        printf("Queue is full\n");
        return;
    }
    else {
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->arr[queue->rear] = val;
    queue->size++;
    }
}

int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    }
    else {
    int val = queue->arr[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size--;
    return val;
    }
}

void riverView(int arr[], int n) {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity = n;
    queue->front = queue->size = 0;
    queue->rear = queue->capacity - 1;
    queue->arr = (int*)malloc(queue->capacity * sizeof(int));

    int max = 0;
    for (int i = 0; i < n; i++) {
        while (!isEmpty(queue) && arr[queue->arr[queue->rear]] < arr[i]) {
            dequeue(queue);
        }
        enqueue(queue, i);
        if (arr[i] > max) {
            max = arr[i];
            printf("Building at index %d can see the river view\n", i);
        }
    }
}

int main() {
    int arr[] = {3, 5, 2, 7, 8, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    riverView(arr, n);

    return 0;
}





















