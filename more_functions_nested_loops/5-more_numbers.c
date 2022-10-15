#include "main.h"
/*
 * prints 10 times the numbers, from 0 to 14, followed by a new line.
 * Return: 0
 */

void more_numbers(void)
{
	int n, k;

	for (n = 1; n <= 10; n++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
			{
				_putchar(k / 10 + '0');
			}
			_putchar(k % 10 + '0');
		}	
		_putchar('\n');
	}
}
