#ifndef QUEUE_H
#define QUEUE_H


#include "lnode.h"


typedef struct Queue {
	struct LNode *first;
	struct LNode *last;
} Queue;


Queue * queue_init();
void queue_free(Queue *q);
void enqueue(Queue *q, IDnum *x);
IDnum dequeue(Queue *q);
boolean isEmpty(Queue *q);


#endif
