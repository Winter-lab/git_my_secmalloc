#ifndef _SECMALLOC_H
#define _SECMALLOC_H

/*	----------------------- LIBRARIES -----------------------	*/
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h> // for mmap
#include <time.h>
#include <string.h>
#include <strings.h>

/*	----------------------- FUNCTIONS -----------------------
	1. MALLOC
	allocates size bytes of uninitialized memory.
	The allocated space is suitably aligned (after possible pointer 
	coercion) for storage of any type of object.
	
	2. FREE
	causes the allocated memory referenced by ptr to be made 
	available for future allocations.
	If ptr is NULL, no action occurs.
	
	3. CALLOC
	calloc initializes the allocated memory with 0 value.
	
	4. REALLOC
	changes the size of the previously allocated memory referenced
	by ptr to size bytes.  The contents of the memory are unchanged 
	up to the lesser of the new and old sizes.  If the new size is
	larger, the value of the newly allocated portion of the memory is
	undefined.  Upon success, the memory referenced by ptr is freed 
	and a pointer to the newly allocated memory is returned.
	
	RETURN VALUES
     The malloc() and calloc() functions return a pointer to the allocated
     memory if successful; otherwise a NULL pointer is returned and errno is
     set to ENOMEM.

     The realloc() function returns a pointer, possibly identical to ptr, to
     the allocated memory if successful; otherwise a NULL pointer is returned,
     and errno is set to ENOMEM if the error was the result of an allocation
     failure.  The realloc() function always leaves the original buffer intact
     when an error occurs.  If size is 0, either NULL or a pointer that can be
     safely passed to free(3) is returned.

     The free() function returns no value.
	---------------------------------------------------------	*/
	
void    *my_malloc(size_t size);
void    my_free(void *ptr);
void    *my_calloc(size_t nmemb, size_t size);
void    *my_realloc(void *ptr, size_t size);

/*	----------------------- STRUCTURE -----------------------	*/
typedef struct Chunk {
	void* m_addr;
	size_t m_size;
	//int	m_occupe;
	//char	m_canari;
	struct	Chunk	*m_next;
	struct	Chunk	*m_prev;
} t_chunk;

/*	----------------------- GLOBALS -----------------------	*/
t_chunk *head = NULL;
int call_memory_leak = 0;
char* msm_output = NULL;

#endif

