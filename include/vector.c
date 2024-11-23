/*
* Requires definition of VECTOR_T.
* Upon every inclusion, it generates a type VECTOR_T ## _vector 
* along with relevant functions.
*/
#include <stddef.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 4

#ifndef VECTOR_ITEM_T
#define VECTOR_ITEM_T size_t
#endif

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

void VECTOR_METHOD(increment_length)(struct VECTOR_T *vec) {
	if (vec->length >= vec->capacity) {
		vec->data = realloc(vec->data, vec->capacity * 2);
		vec->capacity *= 2;
	}
	if (!vec->data) {
		return;
	}
	vec->length += 1;
}

int VECTOR_METHOD(insert)(struct VECTOR_T *vec, VECTOR_ITEM_T element, size_t index) {
	if (index > vec->length) {
		return -1;
	}	
	VECTOR_METHOD(increment_length)(vec);
	
	for (size_t i = vec->length + 1; i > index; i--) {
		vec->data[i] = vec->data[i - 1];
	}

	vec->data[index] = element;

	return 0;
}

int VECTOR_METHOD(push_front)(struct VECTOR_T *vec, VECTOR_ITEM_T element) {
	return VECTOR_METHOD(insert)(vec, element, 0);
}

int VECTOR_METHOD(push_back)(struct VECTOR_T *vec, VECTOR_ITEM_T element) {
	return VECTOR_METHOD(insert)(vec, element, vec->length);
}

int VECTOR_METHOD(get)(const struct VECTOR_T *vec, size_t index) {
	return vec->data[index];
}

VECTOR_ITEM_T VECTOR_METHOD(remove)(struct VECTOR_T *vec, size_t index) {
	if (index >= vec->length) {
		return vec->data[0];
	}

	VECTOR_ITEM_T retval = vec->data[index];

	for (size_t i = index + 1; i < vec->length; i++) {
		vec->data[i - 1] = vec->data[i];
	}

	vec->length -= 1;

	return retval;
}

VECTOR_ITEM_T VECTOR_METHOD(pop_front)(struct VECTOR_T *vec) {
	return VECTOR_METHOD(remove)(vec, 0);
}

VECTOR_ITEM_T VECTOR_METHOD(pop_back)(struct VECTOR_T *vec) {
	return VECTOR_METHOD(remove)(vec, vec->length - 1);
}
