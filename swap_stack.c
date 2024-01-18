#include "monty.h"

/**
 * _swap- swaps the top 2 element  at the top of stack
 * @line_number: line number
 * @stack: pointer to top element of stack
 * Return: nothing
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *new;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		token_error(short_stak(line_number));
		return;
	}
	new = (*stack)->next->next;
	(*stack)->next->prev = new->next;
	if (new->next != NULL)
		new->next->prev = (*stack)->next;
	new->next = (*stack)->next;
	new->prev = *stack;
	(*stack)->next = new;
}
