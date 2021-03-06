/* A Vector is a dynamically sized array */
//TODO: Add generic resizing functionality given a passed
// resize value and a passed resize rate (e.g. 50% by tripling)
#include <stdio.h>
#include <stdlib.h>
#include "DynamicArray.h"

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

/* Returns the value at a specified index.
 * Returns the first element given an out of bounds index */
int get(Vector *v, int index){
	if (index < 0 || index > v->size){
		return v->data[0];
	}

	return v->data[index];
}

/* Replaces an element at a given index to a given value.
 * Does not modify any elements given index < 0
 * Resizes array and zero fills newly allocated memory when
 * index > size */
void set(Vector *v, int index, int value){
	if (index < 0){
		return;
	}

	/* zero fill in the case of index > size */
	while (index > v->size){
		add(v, 0);
	}

	/* Set new value */
	v->data[index] = value;
}

/* Resizes the array when > 75% full by doubling*/
//TODO: Add generic resizing functionality (see top of file)
void resize(Vector *v){
	if ( ((double)v->size / v->capacity) > .75){
		v->capacity *= 2;
	}

	v->data = realloc(v->data, sizeof(int) * v->capacity);
}

/* Frees the memory */
void clear(Vector *v){
	free(v->data);
	v->size = 0;
}

//TODO: Consider halfing the capacity size and reallocating if deleting enough
// elements falls under a certain threshold of size/capacity.

/* Removes an element from the vector and reallocates memory accordingly.
 * Does not remove out of bounds indices */
void delete(Vector *v, int index){

	if (index > v->size -1 || index < 0){
		printf("Error, your index is out of bounds with the value of: %d", index);
		return;
	}

	/* Shift all elements down  from removed element
	 * and decrease the size of vector */
	for (int i = index; i < v->size -1; i++){
		v->data[i] = v->data[i+1];
	}

	v->size--;

	/* Reallocate; the last element is unused*/
	v->data = (int*)realloc(v->data, v->size * sizeof(int));

}

/* Prints out each element in the vector */
void print(Vector *v){
	for (int i = 0; i < v->size; i++){
		printf("%d ", v->data[i]);
	}

	printf("\n");
}

