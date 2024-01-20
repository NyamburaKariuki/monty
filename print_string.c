#include "monty.h"
/**
 * _fstr - print the string from top of stack
 * @line_number: line number
 * @stack: pointer to top element of stack
 * Return: nothing
 */
void _fstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	(void)line_number;

	temp = *stack;
	while (temp)
	{
		if (temp->n > 127 || temp->n <= 0)
		{
			break;
		}
			printf("%c", temp->n);
			temp = temp->next;
	}
	printf("\n");
}
