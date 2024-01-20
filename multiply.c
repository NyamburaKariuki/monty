#include "monty.h"
/**
 * _multiply2 - multiplies the top 2 elements of stack
 * @line_number: line number
 * @stack: pointer to top element of stack
 * Return: nothing
 */
void _multiply2(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	int length = 0;
	int i;

	temp = *stack;
	while (temp)
	{
		temp = temp->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(busy.file);
		free(busy.linecontent);
		_freestack(*stack);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	i = temp->next->n * temp->n;
	temp->next->n = i;
	*stack = temp->next;
	free(temp)
}
