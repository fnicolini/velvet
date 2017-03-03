#include <stdlib.h>

#include "queue.h"


Queue * queue_init()
{
	Queue *q = malloc(sizeof(Queue));
	q->first = NULL;
	q->last = NULL;
	return q;
}

void queue_free(Queue *q)
{
	LNode *node = q->first;
	while (node) {
		LNode *temp = node;
		node = node->next;
		lnode_free(temp);
	}
	free(q);
}

void enqueue(Queue *q,  IDnum x)
{
	LNode *node = lnode_init(x);

	if (!q->last)
		q->first = node;
	else
		q->last->next = node;

	q->last = node;
}

IDnum dequeue(Queue *q)
{
  	if (!(q && q->first))
  	  return NULL;

	LNode *node = q->first;
	q->first = node->next;

	if (!q->first)
		q->last = NULL;

	IDnum ret = node->key;
	lnode_free(node);
	return ret;
}

boolean isEmpty(Queue *q)
{
	return !q->first;
}
