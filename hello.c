#include <stdio.h>

__attribute__((target_clones("default","sve2")))
int main() {
    // Print "Hello, World!" to the console
    printf("Hello, World!\n");
}

