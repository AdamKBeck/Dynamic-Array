#include <stdio.h>
#include "DynamicArray.h"

/* Tests the dynamic array */
int main(){
	Vector v;
	init(&v);

	for (int i = 0; i < 8; i++){
		add(&v, i);
	}

	printf("Size of vector: %d\n", v.size);
	printf("Capacity of vector: %d\n", v.capacity);
	printf("Ratio (size/capacity): %f\n\n", (double)v.size/v.capacity);

	printf("Adding another element...\n\n");
	add(&v, 1);

	printf("Size of vector: %d\n", v.size);
	printf("Capacity of vector: %d\n", v.capacity);
	printf("Ratio (size/capacity): %f\n\n", (double)v.size/v.capacity);

	print(&v);
	delete(&v, 3);

	clear(&v);

	return 0;
}
