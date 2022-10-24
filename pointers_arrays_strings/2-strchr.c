#include "main.h"
#include <stdio.h>
/**
 * _strchr - Funtion that locates char in one string
 * @s: string that is passes in
 * @c: char that you are searching s for
 * Return: is a char c found in one string, or null.
 */


char *_strchr(char *s, char c)
{
	int i;
	char *ret;

	ret = NULL;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ret = &s[i];
			break;
		}
	}
	if (c == '\0' && s[i] == '\0')
		return (&s[i]);
	else
		return (ret);
}
