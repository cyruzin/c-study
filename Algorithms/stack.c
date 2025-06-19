#include <stdbool.h>
#include <stdio.h>

const int MAX_SIZE = 5;

/**
 * index:   [0] [1] [2] [3] [4]
 * data:    [ ] [ ] [ ] [ ] [ ]
 * top:         -1   ← empty stack
 */
typedef struct {
  int data[MAX_SIZE];
  int top;
} Stack;

void init(Stack *s) { s->top = -1; }

bool is_empty(Stack *s) { return s->top == -1; }

bool is_full(Stack *s) { return s->top == MAX_SIZE - 1; }

bool push(Stack *s, int value) {
  if (is_full(s)) {
    printf("stack overflow\n");
    return false;
  }
  s->data[++(s->top)] = value;
  return true;
}

bool pop(Stack *s, int *value) {
  if (is_empty(s)) {
    printf("stack underflow\n");
    return false;
  }
  *value = s->data[(s->top)--];
  return true;
}

void print_stack(Stack *s) {
  if (is_empty(s)) {
    printf("[empty stack]\n");
    return;
  }

  printf("stack (top → bottom): ");
  for (int i = s->top; i >= 0; i--) {
    printf("%d ", s->data[i]);
  }
  printf("\n");
}

int main() {
  Stack s;
  init(&s);

  push(&s, 10);
  push(&s, 20);
  push(&s, 30);
  print_stack(&s);

  int removed;
  pop(&s, &removed);
  printf("popped: %d\n", removed);
  print_stack(&s);

  return 0;
}
