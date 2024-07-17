#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct stack {
  int size;
  int top;
  int* arr;
};

int isEmpty(struct stack* ptr) {
  if (ptr->top == -1) {
    return 1;
  } else {
    return 0;
  }
}

int isFull(struct stack* ptr) {
  if (ptr->top == ptr->size - 1) {
    return 1;
  } else {
    return 0;
  }
}

void push(struct stack* ptr, int val) {
  if (isFull(ptr)) {
    printf("Stack overflow!");
  } else {
    ptr->top++;
    ptr->arr[ptr->top] = val;
  }
}

int pop(struct stack* ptr) {
  if (isEmpty(ptr)) {
    printf("Stack underflow!");
    return -1;
  } else {
    int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
  }
}

int evaluatePostfix(char* exp) {
  struct stack* sp = (struct stack*)malloc(sizeof(struct stack));
  sp->size = 100;
  sp->top = -1;
  sp->arr = (int*)malloc(sp->size * sizeof(char));
  int i = 0; // traversing expression
  while (exp[i] != '\0') {
    if (isdigit(exp[i])) {
      push(sp, exp[i] - '0');
    } else {
      int val1 = pop(sp);
      int val2 = pop(sp);
      switch (exp[i]) {
        case '+':
          push(sp, val2 + val1);
          break;
        case '-':
          push(sp, val2 - val1);
          break;
        case '*':
          push(sp, val2 * val1);
          break;
        case '/':
          push(sp, val2 / val1);
          break;
      }
    }
    i++;
  }
  return pop(sp);
}


int main() {
  char* exp = (char*)malloc(100 * sizeof(char));
  printf("Enter a postfix expression: ");
  scanf("%99s", exp);
  printf("The answer for the postfix expression evaluation is %d", evaluatePostfix(exp));
  free(exp);
  return 0;
}
