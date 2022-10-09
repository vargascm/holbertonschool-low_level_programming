#include<stdio.h>
/**
 * main - Prints "Size in nytes of a char, int, long, long long, float"
 * Return: 0
 */
int main(void)
{
	printf("Size of a char %i :\n", sizeof(char));
	printf("Size of an int %i :\n", sizeof(int));
	printf("Size of a long %i :\n", sizeof(long int));
	printf("Size of a long long %i :\n", sizeof(long long int));
	printf("Size of a float %i :\n", sizeof(float));

	return (0);
}
