#include "monty.h"
/**
 * get_wl - gets the word length
 * @s: string
 * @delim: delimeter
 * Return: wordlength
 */
int get_wl(char *s, char *delim)
{
	int wordlen = 0;
	int p = 1;
	int	x = 0;

	while (*(s + x))
	{
		if (_delim(s[x], delim))
			p = 1;
		else if (p)
		{
			wordlen++;
		}
		if (wordlen > 0 && _delim(s[x], delim))
			break;
		x++;
	}
	return (wordlen);
}
