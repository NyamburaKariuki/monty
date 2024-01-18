#include "monty.h"
/**
 * _init - inializes a stack
 * @stack: pointer to top element of stack
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int _initialize(stack_t **stack)
{
	stack_t *str;

	str = malloc(sizeof(stack_t));
	if (str == NULL)
		return (malloc_fail());
	str->n = STACK;
	str->next = NULL;
	str->prev = NULL;
	*stack = str;
	return (EXIT_SUCCESS);
}
