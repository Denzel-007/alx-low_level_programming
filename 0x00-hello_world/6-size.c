#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %1u bytes(s)\n", sizeof(char));
	printf("Size of an int: %1u bytes(s)\n", sizeof(int));
	printf("Size of a long int: %1u bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %1u byte(s)\n", sizeof(long long));
	printf("Size of a float: %1u byte(s)\n", sizeof(float));
	return (0);
}
