#include "monty.h"
/**
 * get_integer - gets a char pointing to a string with int
 * @n: number to convert to str
 * Return: string
 */
char *get_integer(int n)
{
	unsigned int x;
	int l = 0;
	long num = 0;
	char *str;

	x = absolute(n);
	l = baselen(x, 10);
	if (n < 0 || num < 0)
		l++;
	str = malloc(l + 1);
	if (!str)
		return (NULL);
	buff(x, 10, str, l);
	if (n < 0 || num < 0)
		str[0] = '_';
	return (str);
}
