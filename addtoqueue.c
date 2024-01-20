#include "monty.h"
/**
 * _addq - add a new element  at the til of stack
 * @n: value
 * @stack: pointer to top element of stack
 * Return: nothing
 */

void _addq(stack_t **stack, int n)
{
	stack_t *new, *temp;

	temp = *stack;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Can't Malloc\n");
	}
	new->n = n;
	new->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*stack = new;
		new->prev = NULL;
	}
	else
	{
		temp->next = new;
		new->prev = temp;
	}
}
