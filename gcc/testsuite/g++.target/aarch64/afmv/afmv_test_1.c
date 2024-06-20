#include <stdio.h>

__attribute__((target_clones("default", "sse4.2", "avx2")))
void foo() {
    printf("Function foo\n");
}

int main() {
    foo();
    return 0;
}
