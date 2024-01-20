#include "monty.h"
/**
 * _rotl - rotate stack to the top
 * @line_number: line number
 * @stack: pointer to top element of stack
 * Return: nothing
 */
void _rotl(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *temp = *stack;
	stack_t *new;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	new = (*stack)->next;
	new->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = temp;
	(*stack) = new;
}
