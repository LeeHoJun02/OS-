#include "qtype.h"
#include <stdlib.h>

Queue* init(void) {
	Queue* queue = (Queue*)malloc(sizeof(Queue));
	if ( queue == NULL)
	{
		return NULL;
	}
	
	if (queue) {
		queue->head = NULL;
		queue->tail = NULL;
	}
	return queue;
}

void release(Queue* queue) {
	if (queue == NULL) {
		return;
	}

	Node* current = queue->head;
	while (current != NULL)
	{
		Node* next = current->next;
		free(current);
		current = next;
	}
	free(queue);	
}

Node* nalloc(Item item);
void nfree(Node* node);
Node* nclone(Node* node);

Reply enqueue(Queue* queue, Item item);
Reply dequeue(Queue* queue);
Queue* range(Queue* queue, Key start, Key end);
