#include <stdlib.h>
#include "list.h"

List * list_init()
{
	List *list = malloc(sizeof(List));
	list -> head = NULL;
	return list;
}

void list_free(List *list)
{
	LNode *node = list -> head;
	while (node) {
		LNode *temp = node;
		node = node -> next;
		lnode_free(temp);
	}
	free(list);
}

void list_insert(List *list, IDnum key)
{
	LNode *to_add = lnode_init(key);

	LNode *current = list -> head;

	while(current) {
		current = current -> next;
	}

	current = to_add;
	
}

boolean list_contains(List *list, IDnum target)
{
	if(!(list && list -> head))
		return false;

	Node *current = list -> head;
	while(current){
		if(current -> key == target)
			return true;
		current = current -> next;
	}
	return false;
}	