#include "monty.h"
/**
 * _pop - deletes the top element of the stack
 * @line_number: line number
 * @stack: pointer to top element of stack
 * Return: nothing
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(busy.file);
		free(busy.linecontent);
		_freestack(*stack);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = temp->next;
	free(temp);
}
