#include "main.h"
#include <string.h>
/**
 * print_rev - reverses a string.
 * @s: Pointer to string to reverse
 * Return: Always 0
 *
 */

int string(char *s)
{
	int i = 0;
	int c = 0;

	while (s[i] != '\0')
	{	c = c + 1;
		i++;
	}
	return (c);
}

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	for (; i >= 0; i--)
		_putchar(s[i]);
}
