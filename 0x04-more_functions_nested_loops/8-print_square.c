#include "main.h"
/**
 * print_square - prints hashes sqaures.
 * @size: size of the sqaure.
 * Return: no return.
 * Description - print sqaures
 */
void print_sqaure(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar (35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
