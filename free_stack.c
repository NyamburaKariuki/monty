#include "monty.h"
/**
 * _freestack - Frees stack
 * @stack: poiner to thi top element
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
