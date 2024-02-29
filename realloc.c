#include "shell.h"

/**
 **_memset - fillings memories with a constant byte
 *@s: The pointer pointings to the memory area
 *@b: The byte trying to fill *s with
 *@n: The amount of bytes to be filled
 *Return: (s) a Apointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - freeings a string of strings
 * @pp: strig of strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - realocation a block of memory
 * @ptr: pointers pointings to previous malloc' alocaated block
 * @old_size: Byte size of previous blocks
 * @new_size: Byte size of new block
 *
 * Return: pointezr pointing to thea old block namen.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
