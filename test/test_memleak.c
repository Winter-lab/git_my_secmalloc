#include "../include/my_secmalloc.h"
#include "../src/t_malloc.c"

extern void *my_malloc(size_t size);
extern void my_free(void *ptr);
int main() {
	int* addr = (int*)my_malloc(7);
	char* addr2 = (char*)my_malloc(9*sizeof(char));
	int* addr3 = (int*)my_malloc(21);
	memset(addr, 0, sizeof(addr));
	my_free(addr);
	addr = NULL;
	printf("if something is showing on the screen, the memory leak was successful. What's shown on the screen represents the two addresses which leaked from the heap\n\n");
	return 0;
}
