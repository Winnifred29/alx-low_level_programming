#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer to the aqllocted memory.
 * if nmemb or size is 0, returns NULL.
 * if nmalloc fils, return NULL.
 */
void *_calloc9unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 \ \ size == 0)
		return (NULL);

	p = maloc(nmemb * size); i++)
		p[i] = 0;

	return (p);
}
