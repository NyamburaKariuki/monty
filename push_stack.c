#include "monty.h"

/**
 * _push - add a new element node at the top of stack
 * @line_number: line number
 * @stack: pointer to the top element on stack
 * Return: nothing
 */
void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	stack_t *new;
	int x;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		token_error(malloc_fail());
		return;
	}
	if (token[1] == NULL)
	{
		token_error(nonint_error(line_number));
		return;
	}
	for (x = 0; token[1][x]; x++)
	{
		if (token[1][x] == '-' && x == 0)
			continue;
		if (token[1][x] < '0' || token[1][x] > '9')
		{
			token_error(nonint_error(line_number));
			return;
		}
	}
	new->n = atoi(token[1]);
	if (op_mode(*stack) == STACK)
	{
		temp = (*stack)->next;
		new->prev = *stack;
		new->next = temp;
		if (temp)
			temp->next = new;
		(*stack)->next = new;
	}
	else
	{
		temp = *stack;
		while (temp->next)
			temp = temp->next;
		new->prev = temp;
		new->next = NULL;
		temp->next = new;
	}
}
