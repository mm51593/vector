#include <assert.h>

#define VECTOR_ITEM_T int
#define VECTOR_TAG int
#include "include/vector.c"

int main() {
	struct int_vector ivec = int_vector_construct();

	int_vector_push_back(&ivec, 1);
	int_vector_push_back(&ivec, 2);
	int_vector_push_back(&ivec, 3);
	int_vector_push_back(&ivec, 4);

	assert(int_vector_get(&ivec, 0) == 1);
	assert(int_vector_get(&ivec, 1) == 2);
	assert(int_vector_get(&ivec, 2) == 3);
	assert(int_vector_get(&ivec, 3) == 4);

	int_vector_push_back(&ivec, 5);

	assert(int_vector_get(&ivec, 0) == 1);
	assert(int_vector_get(&ivec, 1) == 2);
	assert(int_vector_get(&ivec, 2) == 3);
	assert(int_vector_get(&ivec, 3) == 4);
	assert(int_vector_get(&ivec, 4) == 5);
}
