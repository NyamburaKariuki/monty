#include "monty.h"
/**
 * get_nw - get next word
 * @delim: delimiter
 *@s: string
 * Return: next word
 */
char *get_nw(char *s, char *delim)
{
	int p = 0;
	int x = 0;

	while (*(s + x))
	{
		if (_delim(s[x], delim))
			p = 1;
		else if (p)
			break;
		x++;
	}
	return (s + x);
}
