#include <assert.h>

#define VECTOR_ITEM_T int
#define VECTOR_TAG int
#include "include/vector.c"

int main() {
	struct int_vector ivec = int_vector_construct();
	struct int_vector ivec2 = int_vector_construct();
	int retval;

	assert(ivec.length == 0);
	assert(ivec.capacity == 4);

	retval = int_vector_push_back(&ivec, 0);
	assert(ivec.length == 1);
	assert(ivec.capacity == 4);
	assert(ivec.data[0] == 0);
	assert(retval == 0);

	retval = int_vector_push_back(&ivec2, 0);
	assert(ivec2.length == 1);
	assert(ivec2.capacity == 4);
	assert(ivec2.data[0] == 0);
	assert(retval == 0);

	retval = int_vector_push_back(&ivec, 1);
	assert(ivec.length == 2);
	assert(ivec.capacity == 4);
	assert(ivec.data[1] == 1);
	assert(retval == 0);

	retval = int_vector_push_back(&ivec, 2);
	assert(ivec.length == 3);
	assert(ivec.capacity == 4);
	assert(ivec.data[2] == 2);
	assert(retval == 0);

	retval = int_vector_push_back(&ivec, 3);
	assert(ivec.length == 4);
	assert(ivec.capacity == 4);
	assert(ivec.data[3] == 3);
	assert(retval == 0);

	retval = int_vector_push_back(&ivec, 4);
	assert(ivec.length == 5);
	assert(ivec.capacity == 8);
	assert(ivec.data[4] == 4);
	assert(retval == 0);

	assert(ivec2.length == 1);
	assert(ivec2.capacity == 4);
	assert(ivec2.data[0] == 0);
	assert(retval == 0);

	retval = int_vector_push_back(&ivec, 5);
	assert(ivec.length == 6);
	assert(ivec.capacity == 8);
	assert(ivec.data[5] == 5);
	assert(retval == 0);
}
