#include <assert.h>

#define VECTOR_ITEM_T int
#define VECTOR_TAG int
#include "include/vector.c"

int main() {
	struct int_vector ivec = int_vector_construct();
	int retval;

	assert(ivec.length == 0);
	assert(ivec.capacity == 4);

	retval = int_vector_insert(&ivec, 0, 0);
	assert(ivec.length == 1);
	assert(ivec.capacity == 4);
	assert(retval == 0);

	retval = int_vector_insert(&ivec, 1, 0);
	assert(ivec.length == 2);
	assert(ivec.capacity == 4);
	assert(retval == 0);

	retval = int_vector_insert(&ivec, 2, 0);
	assert(ivec.length == 3);
	assert(ivec.capacity == 4);
	assert(retval == 0);

	retval = int_vector_insert(&ivec, 3, 0);
	assert(ivec.length == 4);
	assert(ivec.capacity == 4);
	assert(retval == 0);

	retval = int_vector_insert(&ivec, 4, 0);
	assert(ivec.length == 5);
	assert(ivec.capacity == 8);
	assert(retval == 0);

	retval = int_vector_insert(&ivec, 5, 0);
	assert(ivec.length == 6);
	assert(ivec.capacity == 8);
	assert(retval == 0);

	retval = int_vector_insert(&ivec, 19, 3);
	assert(ivec.length == 7);
	assert(ivec.capacity == 8);
	assert(ivec.data[3] == 19);
	assert(retval == 0);

	retval = int_vector_insert(&ivec, 19, 100);
	assert(ivec.length == 7);
	assert(ivec.capacity == 8);
	assert(retval == -1);
}
