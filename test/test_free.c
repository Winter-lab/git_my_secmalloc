#include "../include/my_secmalloc.h"
#include "../src/t_malloc.c"

/* DECLARING THE FUNCTIONS WE'RE GOING TO USE */
extern void my_free(void *ptr);

int main() {
	int* addr = (int*)my_malloc(7);
	// overwriting data in case it contains sensitive data
	memset(addr, 0, sizeof(addr));
	my_free(addr);
	addr = NULL;
	printf("Successful free: no memory leak\n");
	return 0;
}
