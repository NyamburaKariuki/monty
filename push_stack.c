#include "monty.h"

/**
 * _push - add a new element node at the top of stack
 * @line_number: line number
 * @stack: pointer to the top element on stack
 * Return: nothing
 */
void _push(stack_t **stack, unsigned int line_number)
{
	int x, y = 0;
	int fl = 0;

	if (busy.args)
	{
		if (busy.args[0] == '-')
			y++;
		for (; busy.args[y] != '\0'; y++)
		{
			if (busy.args[y] > 57 || busy.args[y] < 48)
				fl = 1;
		}
		if (fl == 1)
		{
			fprintf(stderr, "L%d: usage : push integer\n", line_number);
			fclose(busy.file);
			free(busy.linecontent);
			_freestack(*stack);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(busy.file);
		free(busy.linecontent);
		_freestack(*stack);
		exit(EXIT_FAILURE);
	}
	x = atoi(busy.args);
	if (busy.lift == 0)
		_addn(stack, x);
	else
		_addq(stack, x);
}
