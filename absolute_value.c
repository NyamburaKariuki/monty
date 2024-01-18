#include "monty.h"
/**
 * absolute - gets the absolute value of an int
 * @x: integere
 * Return: unsigned int
 */
unsigned int absolute(int x)
{
	if (x < 0)
		return (-(unsigned int)x);
	return ((unsigned int)x);
}
/**
 * buff - fills buffer with correct number
 * @n: number to convert
 * @bs: base for number upto 36
 * @buffer: buffer
 * @size: size of the buffer
 */
void buff(unsigned int n, unsigned int bs, char *buffer, int size)
{
	int r;
	int i = size - 1;

	buffer[size] = '\0';
	while (i >= 0)
	{
		r = n % bs;
		if (r > 9)
			buffer[i] = r + 87;
		else
			buffer[i] = r;
		n /= bs;
		i--;
	}
}
