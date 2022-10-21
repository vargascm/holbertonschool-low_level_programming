#include "main.h"

/**
 * _strcat - using first time pointers- concat string
 *@src: Pointers
 *@dest: Parameters pointers
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *c = dest;

	while (*c != '\0')
		c++;

	while (*src != '\0')
	{
		*c = *src;
		c++;
		src++;
	}
	*c = '\0';
	return (dest);
}
