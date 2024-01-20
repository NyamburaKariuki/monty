#include "monty.h"

/**
 * _pint - print the top element at the top of stack
 * @line_number: line number
 * @stack: pointer to the head pointer
 * Return: number of nodes
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(busy.file);
		free(busy.linecontent);
		_freestack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
