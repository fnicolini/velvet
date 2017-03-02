#include <stdio.h>
#include <stdlib.h>

#include "lnode.h"


LNode * lnode_init(IDnum key)
{
	LNode *node = malloc(sizeof(LNode));
	node->key = key;
	node->next = NULL;
	return node;
}

void lnode_free(LNode *node)
{
	free(node);
}
