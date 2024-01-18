#include "monty.h"
/**
 * get_wc - gets word count
 * @s: string
 * @delim: delimiter
 * Return: void
 */
int get_wc(char *s, char *delim)
{
	int wordcount = 0;
	int p;
	int x = 0;

	while (*(s + 1))
	{
		if (_delim(s[x], delim))
			p = 1;
		else if (p)
		{
			p = 0;
			wordcount++;
		}
		x++;
	}
	return (wordcount);
}
