#include <stdio.h>

__attribute__((target_clones("default", "sse4.2", "avx2")))
inline void baz() {
    printf("Function baz\n");
}

int main() {
    baz();
    return 0;
}
