#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to reverse
 * @n: number of elements of the array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp = 0;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + (n - 1));
		*(a + (n - 1)) = tmp;
	}
}
