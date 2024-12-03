#define VECTOR_ITEM_T unsigned int
#define VECTOR_TAG uint
#include "include/vector.c"

#include <assert.h>

int main() {
	struct uint_vector vec1 = uint_vector_construct();
	struct uint_vector vec2 = uint_vector_construct();

	uint_vector_push_back(&vec1, 1);	
	uint_vector_push_back(&vec2, 2);	

	assert(vec1.data[0] == 1);
	assert(vec2.data[0] == 2);
	
	uint_vector_push_back(&vec1, 3);	
	uint_vector_push_back(&vec2, 4);	

	assert(vec1.data[0] == 1);
	assert(vec2.data[0] == 2);
	assert(vec1.data[1] == 3);
	assert(vec2.data[1] == 4);
	
	uint_vector_push_back(&vec1, 5);	
	uint_vector_push_back(&vec2, 6);	

	assert(vec1.data[0] == 1);
	assert(vec2.data[0] == 2);
	assert(vec1.data[1] == 3);
	assert(vec2.data[1] == 4);
	assert(vec1.data[2] == 5);
	assert(vec2.data[2] == 6);

	uint_vector_push_back(&vec1, 7);	
	uint_vector_push_back(&vec2, 8);	

	assert(vec1.data[0] == 1);
	assert(vec2.data[0] == 2);
	assert(vec1.data[1] == 3);
	assert(vec2.data[1] == 4);
	assert(vec1.data[2] == 5);
	assert(vec2.data[2] == 6);
	assert(vec1.data[3] == 7);
	assert(vec2.data[3] == 8);

	uint_vector_push_back(&vec1, 9);	
	uint_vector_push_back(&vec2, 10);	

	assert(vec1.data[0] == 1);
	assert(vec2.data[0] == 2);
	assert(vec1.data[1] == 3);
	assert(vec2.data[1] == 4);
	assert(vec1.data[2] == 5);
	assert(vec2.data[2] == 6);
	assert(vec1.data[3] == 7);
	assert(vec2.data[3] == 8);
	assert(vec1.data[4] == 9);
	assert(vec2.data[4] == 10);
}
