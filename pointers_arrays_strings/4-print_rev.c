#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: Pointer to string to measure
 * Return: Lenght of the string
 */

void print_rev(char *s)
{
	int i, c = 0;

	for (i = 0; s[i] != '\0'; i++)
		c++;
	for (i = c - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
