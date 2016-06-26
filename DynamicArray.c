/* A Vector is a dynamically sized array */

#include <stdio.h>
#include <stdlib.h>
#include "DynamicArray.h"

/* initialize size and capacity */
void init(Vector *v){
	v->size = 0;
	v->capacity = INITIAL_CAPACITY;
	v->data = malloc(sizeof(int) * INITIAL_CAPACITY);
}
