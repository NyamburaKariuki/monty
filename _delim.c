#include "monty.h"
/**
 *_delim - check if string has delimiters
 * @c: characters in string
 * @delim: delim
 * Return: 1 or 0
 */
int _delim(char c, char *delim)
{
	int x = 0;

	while (delim[x])
	{
		if (delim[x] == c)
			return (1);
		x++;
	}
	return (0);
}
