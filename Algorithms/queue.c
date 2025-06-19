#include <stdio.h>

const int MAX_SIZE = 5;

/**
 * index:   [0] [1] [2] [3] [4]
 * data:    [ ] [ ] [ ] [ ] [ ]
 * front:    ↑
 * rear:         -1   ← empty queue
 */
typedef struct {
  int data[MAX_SIZE];
  int front, rear;
} Queue;

void init_queue(Queue *q) {
  q->front = 0;
  q->rear = -1;
}

int is_full(Queue *q) { return q->rear == MAX_SIZE - 1; }

int is_empty(Queue *q) { return q->front > q->rear; }

void enqueue(Queue *q, int item) {
  if (is_full(q)) {
    printf("queue is full\n");
    return;
  }

  q->data[++q->rear] = item;
}

void dequeue(Queue *q) {
  if (is_empty(q)) {
    printf("queue is empty\n");
    return;
  }

  q->front++;
}

void print_queue(Queue *q) {
  if (is_empty(q)) {
    printf("queue is empty\n");
    return;
  }

  for (int i = q->front; i <= q->rear; i++) {
    printf("%d ", q->data[i]);
  }
  printf("\n");
}

int main() {
  Queue q;

  init_queue(&q);

  enqueue(&q, 10);
  enqueue(&q, 20);
  enqueue(&q, 30);

  print_queue(&q);

  dequeue(&q);

  print_queue(&q);

  return 0;
}
