/*
* Requires definition of VECTOR_T.
* Upon every inclusion, it generates a type VECTOR_T ## _vector 
* along with relevant functions.
*/
#include <stddef.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 4

#ifndef VECTOR_ITEM_T
#error "VECTOR_ITEM_T undefined"
#else

#define VECTOR_CONCAT(tag, base) tag ## _ ## base
#define VECTOR_CONCAT2(tag, base) VECTOR_CONCAT(tag, base)
#define VECTOR_T VECTOR_CONCAT2(VECTOR_ITEM_T, vector)
#define VECTOR_METHOD(method) VECTOR_CONCAT2(VECTOR_T, method)


struct VECTOR_T {
	size_t length;
	size_t capacity;
	VECTOR_ITEM_T *data;
};

struct VECTOR_T VECTOR_METHOD(construct)() {
	struct VECTOR_T vec = {
		.length = 0,
		.capacity = INITIAL_CAPACITY,
		.data = calloc(INITIAL_CAPACITY, sizeof(VECTOR_ITEM_T))
	};

	return vec;
}

#endif
