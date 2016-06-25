#ifndef DYNAMICARRAY_H_
#define DYNAMICARRAY_H_

typedef struct{
	int size; 		// elements used so far
	int capacity; 	// total available elements
	int *data;		// dynamic array data stored here
} Vector;



#endif /* DYNAMICARRAY_H_ */
