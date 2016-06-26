#include <stdio.h>
#include "DynamicArray.h"

/* Tests the dynamic array */
int main(){
	Vector v;
	init(&v);

	for (int i = 0; i < 121; i++){
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

	clear(&v);

	return 0;
}
