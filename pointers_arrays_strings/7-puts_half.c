#include "main.h"

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (i > 4)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
