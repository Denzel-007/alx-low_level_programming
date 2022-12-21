#include "main.h"
/**
 * print_buffer - C function that prints the content of an
 * inputted number of bytes from a buffer.
 * @b: number of bytes
 * @size: size of the byte
 */
void print_buffer(char *b, int size)
{
	int i = 0, j;

	if (size < 0)
	{
		_putchar('\n');
		return;
	}
	while (i < size)
	{
		if (i % 10 == 0)
			_putchar("%08x: ", i);
		for (j = i; j < i + 9; j += 2)
		{
			if ((j < size) && ((j + 1) < size))
				_putchar("%02x%02x: ", b[j], b[j + 1]);
			else
			{
				while (++j <= i + 10)
					_putchar(" ");
				_putchar(" ");
			}
		}
		for (j = i; j < i + 9 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				_putchar("%c", b[j]);
			else
				_putchar(".");
		}
		_putchar('\n');
		i += 10;
	}
}
