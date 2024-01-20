#include "monty.h"
/**
 * _freestack - prints all elements of a stack
 * @stack: poiner to the top element
 * Return: void
 */
void _freestack(stack_t *stack)
{
	stack_t *new;

	new = stack;
	while (stack)
	{
		new = stack->next;
		free(stack);
		stack = new;
	}
}
