#include "monty.h"
/**
 * check_delim - add a new element  at the top of stack
 * @ln: pointer to line
 * @dm: delimeter
 * Return: 1 0r 0
 */
int check_delim(char *ln, char *dm)
{
	int x, y;

	for (x = 0; ln[x]; x++)
	{
		for (y = 0; dm[y]; y++)
		{
			if (ln[x] == dm[y])
				break;
		}
		if (dm[y] == '\0')
			return (0);
	}
	return (1);
}
/**
 * _freetoks - frees the global token
 */
void _freetoks(void)
{
	size_t x = 0;

	if (token == NULL)
		return;
	for (x = 0; token[x]; x++)
		free(token[x]);
	free(token);
}
