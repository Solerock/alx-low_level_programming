This file contains the function names and descriptions for all tasks of  0x0C-more_malloc_free project

Task 0: For this task, i will write a function that allocates memory using malloc.
With Prototype: void *malloc_checked(unsigned int b);
Returns a pointer to the allocated memory
if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
The command can be found in the executable file: 0-malloc_checked.c

Task 1: For this task, I will write a function that concatenates two strings.
With Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
If the function fails, it should return NULL
If n is greater or equal to the length of s2 then use the entire string s2
if NULL is passed, treat it as an empty string
The command can be found in the executable file:  1-string_nconcat.c


Task 2: For this task, i will write a function that allocates memory for an array, using malloc.
With Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
The memory is set to zero
If nmemb or size is 0, then _calloc returns NULL
If malloc fails, then _calloc returns NULL
The command can be found in the executable file: 2-calloc.c 


Task 3: For this task, I will write a function that creates an array of integers.
With Prototype:  int *array_range(int min, int max);
The array created should contain all the values from min (included) to max (included), ordered from min to max
Return: the pointer to the newly created array
If min > max, return NULL
If malloc fails, return NULL
The command can be found in the executable file:  3-array_range.c



Task 4: For this task, i will write a function that reallocates a memory block using malloc and free
With Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
old_size is the size, in bytes, of the allocated space for ptr
and new_size is the new size, in bytes of the new memory block
The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
If new_size > old_size, the “added” memory should not be initialized
If new_size == old_size do not do anything and return ptr
If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
Don’t forget to free ptr when it makes sense
The command can be found in the executable file: 100-realloc.c
