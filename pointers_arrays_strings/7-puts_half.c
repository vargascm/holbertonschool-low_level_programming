#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * print the second half of the string.
 * If the number of characters is odd, the function should print the last n
 * characters of the string, where n = (length_of_the_string - 1) / 2
 * @str: Pointer to string to be printed
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i, n, j;

	for (i = 0; str[i] != '\0'; i++)
		n++;
	if (n % 2 == 0)
		n = i / 2;
	else
		n = (i + 1) / 2;
	for (j = n; j < i; j++)
		_putchar(str[j]);

	_putchar('\n');
}
