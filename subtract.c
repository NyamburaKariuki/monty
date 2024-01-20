#include "monty.h"
/**
 *_sub - subtract 2 elements at the top of stack
 * @line_number: line number
 * @stack: pointer to top element of stack
 * Return: nothing
 */
void _sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int s;
	int new;

	temp = *stack;
	for (new = 0; temp != NULL; new++)
		temp = temp->next;
	if (new < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(busy.file);
		free(busy.linecontent);
		_freestack(*stack);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	s = temp->next->n - temp->n;
	temp->next->n = s;
	*stack = temp->next;
	free(temp);
}
