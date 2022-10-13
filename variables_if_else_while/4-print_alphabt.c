#include <stdio.h>
/**
 * main - Main function
 *
 * Return: return 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c == 'e' || c == 'q')   // Lo que hace continue es brindar un 3ra opcion a 0 y 1
			continue;

		putchar(c);
	}



	putchar('\n');

	return (0);
}
