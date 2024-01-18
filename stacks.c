#include "monty.h"
/**
 * m_stack - prints all elements of a stack
 * @stack: poiner to the top element
 *@line_number: line number of the bytecode file
 * Return: void
 */
void m_stack(stack_t **stack, unsigned int line_number)
{
		(*stack)->n = STACK;
			(void)line_number;
}
/**
 * m_queue - prints all elements of a stack
 * @stack: poiner to the top element
 *@line_number: line number of the bytecode file
 * Return: void
 */
void m_queue(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = QUEUE;
	(void)line_number;
}

