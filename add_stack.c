#include "monty.h"

/**
 * add_2_top - add a two top elements  at the top of stack
 * store sum in second top element and delete top element
 * @line_number: line number
 * @stack: pointer to top element of stack
 * Return: nothing
 */
void add_2_top(stack_t **stack, unsigned int line_number)
{
	int length = 0;
	int i;
	stack_t *temp;

	temp = *stack;
	while (temp != NULL)
	{
		temp = temp->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(busy.file);
		free(busy.linecontent);
		_freestack(*stack);
		exit(EXIT_FAILURE);
	}

	temp = *stack;
	i = temp->n + temp->next->n;
	temp->next->n = i;
	*stack = temp->next;
	free(temp);
}
