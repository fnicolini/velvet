#ifndef LNODE_H
#define LNODE_H
#include "globals.h"

typedef struct LNode {
	struct LNode *next;
	IDNum key;
} LNode;


LNode * lnode_init(IDnum key);
void lnode_free(LNode *node);


#endif
