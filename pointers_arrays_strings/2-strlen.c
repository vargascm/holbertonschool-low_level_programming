#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string.
 * @s: Pointer to string to measure
 * Return: Lenght of the string
 */
int _strlen(char *s)
{
	size_t count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
