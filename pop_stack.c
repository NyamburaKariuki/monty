#include "monty.h"
/**
 * _pop - deletes the top element of the stack
 * @line_number: line number
 * @stack: pointer to top element of stack
 * Return: nothing
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{	token_error(pop_err(line_number));
		return;
	}
	temp = (*stack)->next->next;
	free((*stack)->next);
	if (temp == NULL)
		temp->prev = *stack;
	(*stack)->next = temp;
}
