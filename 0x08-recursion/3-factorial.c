#include "main.h"
/**
 * factorial -factorial of number
 * @n: input
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
