#include "monty.h"

/**
 * _swap- swaps the top 2 element  at the top of stack
 * @line_number: line number
 * @stack: pointer to top element of stack
 * Return: nothing
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	int length = 0;
	int i;
	stack_t *new;

	new = *stack;
	while (new != NULL)
	{
		new = new->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(busy.file);
		free(busy.linecontent);
		_freestack(*stack);
		exit(EXIT_FAILURE);
	}
	new = *stack;
	i = new->n;
	new->n = new->next->n;
	new->next->n = i;
}
