#include <assert.h>

#define VECTOR_ITEM_T int
#define VECTOR_TAG int
#include "include/vector.c"

#define VECTOR_ITEM_T long
#define VECTOR_TAG long
#include "include/vector.c"


int main() {
	struct int_vector ivec = int_vector_construct();

	assert(ivec.length == 0);
	assert(ivec.capacity == 4);

	struct long_vector lvec = long_vector_construct();

	assert(lvec.length == 0);
	assert(lvec.capacity == 4);
}
