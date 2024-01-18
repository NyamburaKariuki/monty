#include "monty.h"
/**
 * _tokenlen - gets the length of the token
 * Return: token length
 */
unsigned int _tokenlen(void)
{
	unsigned int tok = 0;

	while (token[tok])
		tok++;
	return (tok);
}
/**
 * op_mode - check if the stack is in stack or queue mode
 * @stack: pointer to top element of stack
 * Return: nothing
 */
int op_mode(stack_t *stack)
{
	if (stack->n == STACK)
		return (STACK);
	else if (stack->n == QUEUE)
		return (QUEUE);
	return (2);
}
