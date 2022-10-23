#include "main.h"
/**
 * _memcpy - funtion that fills memory with a constant byte.
 * @src: Pointer have a string
 * @dest: Pointer to copy
 * @n: number of bytes an char
 * Return: pointer a char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
