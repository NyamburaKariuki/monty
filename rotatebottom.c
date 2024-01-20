#include "monty.h"
/**
 * _rotb- add a new element  at the top of stack
 * @line_number: line number
 * @stack: pointer to top element of stack
 * Return: nothing
 */
void _rotb(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *temp;

	temp = *stack;
	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = *stack;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*stack)->prev = temp;
	(*stack) = temp;
}
