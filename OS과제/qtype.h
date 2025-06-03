#pragma once

#include <stdbool.h>

typedef int Key;
typedef char* Value;

typedef struct {
	Key key;
	Value value;
} Item;

typedef struct {
	bool success;  
	Item item;
} Reply;

typedef struct node_t {
	Item item;
	struct node_t* next;
} Node;

typedef struct {
	Node* head;
	Node* tail;
} Queue;