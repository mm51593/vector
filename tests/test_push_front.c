#include <assert.h>

#define VECTOR_ITEM_T int
#include "include/vector.c"

int main() {
	struct int_vector ivec = int_vector_construct();
	int retval;

	assert(ivec.length == 0);
	assert(ivec.capacity == 4);

	retval = int_vector_push_front(&ivec, 0);
	assert(ivec.length == 1);
	assert(ivec.capacity == 4);
	assert(ivec.data[0] == 0);
	assert(retval == 0);

	retval = int_vector_push_front(&ivec, 1);
	assert(ivec.length == 2);
	assert(ivec.capacity == 4);
	assert(ivec.data[0] == 1);
	assert(retval == 0);

	retval = int_vector_push_front(&ivec, 2);
	assert(ivec.length == 3);
	assert(ivec.capacity == 4);
	assert(ivec.data[0] == 2);
	assert(retval == 0);

	retval = int_vector_push_front(&ivec, 3);
	assert(ivec.length == 4);
	assert(ivec.capacity == 4);
	assert(ivec.data[0] == 3);
	assert(retval == 0);

	retval = int_vector_push_front(&ivec, 4);
	assert(ivec.length == 5);
	assert(ivec.capacity == 8);
	assert(ivec.data[0] == 4);
	assert(retval == 0);

	retval = int_vector_push_front(&ivec, 5);
	assert(ivec.length == 6);
	assert(ivec.capacity == 8);
	assert(ivec.data[0] == 5);
	assert(retval == 0);
}
