#include "montyii.h"

/**
 * pint_err - print error message when stack is empty
 * @line_number: line number where the error occured
 * Return: EXIT_FAILURE
 */
int pint_err(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}
/**
 * pop_err - print error message when stack is empty
 * @line_number: line number where the error occured
 * Return: EXIT_FAILURE
 */
int pop_err(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}
/**
 * division_error - print err msg when stack is too short
 * @line_number: line Numberr
 * Return: EXIT_FAILURE
 */
int division_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: division by zero\n", line_number);
	return (EXIT_FAILURE);
}
/**
 * short_stak - print error msg when stack has < 2 elements
 * @line_number: line number
 *@op: operation
 * Return: EXIT_FAILURE
 */
int short_stak(char *op, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't %S, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}
/**
 * pchar_err - err when there are non character values
 * @msg: error message
 * @line_number: line number
 * Return: EXIT_FAILURE
 */
int pchar_err(char *msg, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pchar\n", line_number, msg);
	return (EXIT_FAILURE);
}
