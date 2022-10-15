#include "main.h"

/**
 * more_numbers - Print numbers
 * n: Var 1
 * k: Var 2
 * Return: New Line
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
