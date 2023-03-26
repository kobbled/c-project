#include <stdio.h>
#include "libfoo.h"

int passed = 0;
int failed = 0;

#ifdef NDEBUG
#define assert(e) ((void)0)
#else
#define assert(e) ((e) ? passed++ : my_assert(#e, __FILE__, __LINE__))
#endif

void my_assert(const char* e, const char* file, int line) {
    printf("Assertion failed: %s, file %s, line %d\n", e, file, line);
    failed++;
}

int main() {

    // Test the get_answer() function
    assert(get_answer() == 42);
    assert(get_answer() != 0);

    // Test other functions here...

    // Print the results
    printf("%d tests passed, %d tests failed\n", passed, failed);

    return 0;
}