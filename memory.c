#include "shell.h"

/**
 * bfree - Freeings a pointing poinyter and NULLs the address
 * @ptr: Addressing of the pointer pointing to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
