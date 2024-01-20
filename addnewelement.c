#include "monty.h"
/**
 * _addn - add a new element  at the top of stack
 * @n: element
 * @stack: pointer to top element of stack
 * Return: nothing
 */
void _addn(stack_t **stack, int n)
{
	stack_t *new;
	stack_t *temp;

	temp = *stack;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Can't malloc\n");
		exit(0);
	}
	if (temp)
	temp->prev = new;
	new->n = n;
	new->prev = NULL;
	new->next = *stack;
	*stack = new;
}

