#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

#define INITIAL_CAPACITY 10 // initial capacity of vector size

typedef struct{
	int size; 		// elements used so far
	int capacity; 	// total available elements
	int *data;		// dynamic array data stored here
} Vector;

void init(Vector *v);

void add(Vector *v, int value);

int get(Vector *v, int index);

void set(Vector *v, int index, int value);

void resize(Vector *v);

void clear(Vector *v);

void remove(Vector *v, int index);

#endif /* DYNAMICARRAY_H_ */
