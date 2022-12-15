#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int n, d, count;

	if (n < 0)
	{
		_putchar(45);
		m = n * -l;
	}
	else
	{
		m = n;
	}
	d = m;
	count = l;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
	for (; count >= l; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
