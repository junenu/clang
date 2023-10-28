#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Function to test
int add(int a, int b) {
    return a + b;
}

// Test cases
void test_add() {
    assert(add(2, 3) == 5);
    assert(add(-2, 3) == 1);
    assert(add(0, 0) == 0);
}

// Main function to run tests
int main() {
    test_add();
    printf("All tests passed!!!!!\n");
    return 0;
}