#include "monty.h"

/**
 * _pall - prints all elements of a stack
 * @stack: poiner to the top element
 * @line_number: line number of the bytecode file
 * Return: void
 */

void _pall(stack_t **stack,	unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	temp = *stack;
	if (temp == NULL)
		return;
	/*when stack is not empty*/
	while (temp)
	{
		printf("%d\n", temp->n);
		/*traverse to next node*/
		temp = temp->next;
	}
}
