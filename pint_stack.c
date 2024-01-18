#include "monty.h"

/**
 * _pint - print the top element at the top of stack
 * @line_number: line number
 * @stack: pointer to the head pointer
 * Return: number of nodes
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		token_error(pint_error(line_number));
		return;
	}
	printf("%d\n", (*stack)->n);
}
