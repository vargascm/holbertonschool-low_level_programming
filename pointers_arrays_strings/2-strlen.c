#include "main.h"
#include <string.h>
/*
 * int_strlen(char *s): returns the length of a string
 */

int _strlen(char *s)
{
	size_t count = 0;
	
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return count;
}
