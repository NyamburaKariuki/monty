#include "monty.h"
/**
 * _divide  - divide the top 2 of stack
 * @line_number: line number
 * @stack: pointer to top element of stack
 * Return: nothing
 */
void _divide(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int length = 0, x;

	temp = *stack;
	while (temp)
	{
		temp = temp->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		fclose(busy.file);
		free(busy.linecontent);
		_freestack(*stack);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(busy.file);
		free(busy.linecontent);
		_freestack(*stack);
		exit(EXIT_FAILURE);
	}
	x = temp->next->n / temp->n;
	temp->next->n = x;
	*stack = temp->next;
	free(temp);
}
