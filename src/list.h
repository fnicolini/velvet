#ifndef LIST_H
#define LIST_H

#include "lnode.h"

typedef struct List {
	struct LNode *head;
} List;

List * list_init();
void list_free();
void list_insert(IDnum key);
boolean list_contains(IDnum target);

#endif