#include<stdio.h>
/**
 * main - Prints "Size in nytes of a char, int, long, long long, float"
 * Return: 0
 */
int main(void)
{
	printf("Size of a char %c :\n", sizeof(char));
	printf("Size of an int %d :\n", sizeof(int));
	printf("Size of a long %ld :\n", sizeof(long int));
	printf("Size of a long long %lld :\n", sizeof(long long int));
	printf("Size of a float %f :\n", sizeof(float));

	return (0);
}
