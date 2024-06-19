#include <stdio.h>
#include <stdlib.h>

// Function that sums the elements of an array
__attribute__((target_clones("default","sve2")))
void sum_array(int *arr, size_t size, int *result) {
    int sum = 0;
    for (size_t i = 0; i < size; i++) {
        sum += arr[i];
    }
    *result = sum;
}

int main() {
    // Initialize an array with test data
    size_t size = 1024;
    int *data = (int*)malloc(size * sizeof(int));
    if (data == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    
    for (size_t i = 0; i < size; i++) {
        data[i] = i + 1;
    }

    int result = 0;
    sum_array(data, size, &result);

    printf("Sum of array elements: %d\n", result);

    free(data);
    return 0;
}
