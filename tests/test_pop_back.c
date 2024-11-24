#include <assert.h>

#define VECTOR_ITEM_T int
#define VECTOR_TAG int
#include "include/vector.c"

int main() {
	struct int_vector ivec = int_vector_construct();
	int retval;
	
	int_vector_push_back(&ivec, 1);
	int_vector_push_back(&ivec, 2);
	int_vector_push_back(&ivec, 3);
	int_vector_push_back(&ivec, 4);
	int_vector_push_back(&ivec, 5);

	assert(ivec.length == 5);
	assert(ivec.capacity == 8);

	retval = int_vector_pop_back(&ivec);
	assert(retval == 5);
	assert(ivec.length == 4);
	assert(ivec.capacity == 8);

	retval = int_vector_pop_back(&ivec);
	assert(retval == 4);
	assert(ivec.length == 3);
	assert(ivec.capacity == 8);

	retval = int_vector_pop_back(&ivec);
	assert(retval == 3);
	assert(ivec.length == 2);
	assert(ivec.capacity == 8);

	retval = int_vector_pop_back(&ivec);
	assert(retval == 2);
	assert(ivec.length == 1);
	assert(ivec.capacity == 8);

	retval = int_vector_pop_back(&ivec);
	assert(retval == 1);
	assert(ivec.length == 0);
	assert(ivec.capacity == 8);

	retval = int_vector_pop_back(&ivec);
	assert(ivec.length == 0);
	assert(ivec.capacity == 8);
}
