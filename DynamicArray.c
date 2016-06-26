/* A Vector is a dynamically sized array */

#include <stdio.h>
#include <stdlib.h>
#include "DynamicArray.h"

int main(){


	return 0;
}

/* initialize size and capacity */
void init(Vector *v){
	v->size = 0;
	v->capacity = INITIAL_CAPACITY;
	v->data = malloc(sizeof(int) * INITIAL_CAPACITY);
}

/* appends a value to the dynamic array */
void add(Vector *v, int value){
	resize(v); // Check if the array needs to be resized

	/* Append element and increment size */
	v->data[v->size] = value;
	v->size++;
}

int get(Vector *v, int index);

void replace(Vector *v, int index, int value);

void resize(Vector *v);

void clear(Vector *v);

