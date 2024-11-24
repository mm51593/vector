#include <assert.h>
#define VECTOR_ITEM_T int
#define VECTOR_TAG int
#include "include/vector.c"

int main() {
	struct int_vector ivec = int_vector_construct();

	assert(int_vector_get_length(&ivec) == 0);
	assert(int_vector_get_capacity(&ivec) == 4);
	assert(int_vector_get_data(&ivec) == ivec.data);

	int_vector_push_back(&ivec, 1);
	int_vector_push_back(&ivec, 2);
	int_vector_push_back(&ivec, 3);
	int_vector_push_back(&ivec, 4);
	int_vector_push_back(&ivec, 5);

	assert(int_vector_get_length(&ivec) == 5);
	assert(int_vector_get_capacity(&ivec) == 8);
	assert(int_vector_get_data(&ivec)[3] == 4);
}