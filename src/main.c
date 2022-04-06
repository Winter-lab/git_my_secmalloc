#include "../include/my_secmalloc.h"
#include "t_malloc.c"
/* TDD à faire. main général pour tout tester */
int main() {
	int* addr = (int*)my_malloc(7);
	char* addr2 = (char*)my_malloc(9*sizeof(char));
	int* addr3 = (int*)my_malloc(21);
	//putenv("MSM_OUTPUT=fic.txt");
	msm_output = getenv("MSM_OUTPUT");
	//printf("%s",msm_output);
	// check si elle existe, mettre fichier par defaut
	memset(addr, 0, sizeof(addr));
	my_free(addr);
	addr = NULL;
	
	return 0;
}
