#include <stdio.h>

__attribute__((target_clones("default","sve2","sve")))
int main() {
	printf("Hello, World!\n");
}

