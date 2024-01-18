#include "monty.h"

/**
 *token_error  - add a new element  at the top of stack
 * @code_error: error code
 * Return: nothing
 */

void token_error(int code_error)
{
		int ln = 0;
		int x = 0;
		char *str = NULL;
		char **tok = NULL;

		ln = _tokenlen();
		tok = malloc(sizeof(char *) * (ln + 2));
		if (!token)
		{
			malloc_fail();
			return;
		}
		while (x < ln)
		{
			tok[x] = token[x];
			x++;
		}
		str = get_integer(code_error);
		if (!str)
		{
			free(tok);
			malloc_fail();
		}
		tok[x++] = str;
		tok[x] = NULL;
		free(token);
		token = tok;
}
