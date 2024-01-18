#include "monty.h"
#include <string.h>

/**
 * pushnew - add a new element  at the top of stack
 * @line_number: line number
 * @stack: pointer to top element of stack
 * Return: nothing
 */
int _monty(FILE *filefd)
{	
	stack_t *stack = NULL;
	size_t length = 0;
	size_t exit_st = EXIT_SUCCESS;
	char *ln = NULL;
	void (*func)(stack_t**, unsigned int);
	unsigned int line_number = 0;
	unsigned int tok_len = 0;

	if (_init(&stack) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	while (getline(&ln, &length, filefd) !=1)
	{
		line_number++;
		token = _strtow(ln, DELIMS);
		if (token == NULL)
		{
			if (check_delim(ln, DELIMS))
				continue;
			_freestack(&stack);
			return (malloc_fail());
		}
		else if (token[0][0] == '#')
		{
			_freetoks();
			continue;
		}
		func = op_functions(token[0]);
		if (op_funcs == NULL)
		{
			_freestack(&stack);
			exit_st = invalid_instruction(token[0], line_number);
			_freetoks();
			break;
		}
		tok_len = token_arr();
		func(&stack, line_number);
		if (token_arr() != tok_len)
		{	
			if (token && token[tok_len])
				exit_st = atoi(tokens[tok_len]);
			else
				exit_st = EXIT_FAILURE;
				_freetoks();
				break;
		}
		_freetoks();
	}
	_freestack(&stack);
	if (ln && *ln == 0)
	{	
		free(ln);
		return (malloc_fail());
	}
	free(ln);
	return (exit_st);
}

