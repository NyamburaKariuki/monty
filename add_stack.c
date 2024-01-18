#include "monty.h"

/**
 * add_2_top - add a two top elements  at the top of stack
 * store sum in second top element and delete top element
 * @line_number: line number
 * @stack: pointer to top element of stack
 * Return: nothing
 */
void add_2_top(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	(void)line_number;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		token_error(short_stak(line_number));
		return;
	}
	temp = *stack;
	temp->next->n += temp->n;
	temp->next->prev = NULL;
	*stack = temp->next;
	free(temp);
}
