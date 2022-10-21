#include "main.h"
/**
 * _strncat - using first time pointers- concat string
 *@src: Pointers
 *@dest: Parameters pointers
 *@n: Parameters quantity of bytes
*Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;

	for (j = 0; j < n && src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i + 1] = '\0';
	return (dest);

}
