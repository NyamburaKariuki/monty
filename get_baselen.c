#include "monty.h"

/**
 * baselen - gets length of a buffer
 * @n: integer
 * @bs: base number
 * Return: length of the buffer
 */
int baselen(unsigned int n, unsigned int bs)
{
	int length = 1;

	while (n > bs - 1)
	{
		length++;
		n /= bs;
	}
	return (length);
}
