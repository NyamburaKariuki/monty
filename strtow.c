#include "monty.h"
#include <stdlib.h>
/**
 * _strtow - separate string into words
 * @delim: delimiter
 * @s: string
 * Return: array of pointers
 */
char **_strtow(char *delim, char *s)
{
	char **wds = NULL;
	int wordcount, wordlength, x, i = 0;

	if (s == NULL || !*s)
		return (NULL);
	wordcount = get_wc(s, delim);
	if (wordcount == 0)
		return (NULL);
	while (i < wordcount)
	{
		wordlength = get_wl(s, delim);
		if (_delim(*s, delim))
		{
			s = get_nw(s, delim);
		}
		wds[i] = malloc((wordlength + 1) * sizeof(char));
		if (wds[i] == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(wds[i]);
			}
				free(wds);
				return (NULL);
		}
		x = 0;
		while (x < wordlength)
		{
			wds[i][x] = *(s + x);
			x++;
		}
		wds[i][x] = '\0';
		s = get_nw(s, delim);
		i++;
	}
	wds[i] = NULL;
	return (wds);
}
