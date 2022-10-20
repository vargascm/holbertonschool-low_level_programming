#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: Pointer to string to measure
 * Return: Lenght of the string
 */
void rev_string(char *s)
{
	char t, *inicio = s;

	for (; *s; s++)
		;
	s--;

	for (; s >= inicio; s--)
	{
		t = *inicio;
		*inicio = *s;
		*s = t;
		inicio++;
	}
}
