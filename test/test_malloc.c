#include "../include/my_secmalloc.h"
#include "../src/t_malloc.c"

extern void *my_malloc(size_t size);
int main() {
	int* addr = (int*)my_malloc(7);
	char* addr2 = (char*)my_malloc(9*sizeof(char));
	int* addr3 = (int*)my_malloc(21);
	printf("Successful malloc\n");
	return 0;
}
