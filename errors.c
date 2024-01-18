#include "monty.h"

/**
 * args_error - prints usage error
 * Return: EXIT_FAILURE
 */

int args_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}
/**
 * malloc_fail - prints error msg when malloc fails
 * Return: EXIT_FAILURE
 */
int malloc_fail(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 * nonint_error - prints invalid push ergs
 *@line_number: monty bytecode line in file
 * Return: EXIT_FAILIURE
 */
int nonint_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * invalid_instruction -unknown instruction
 * @opcode: opcode
 * @line_number: line number
 * Return: EXIT_FAILURE
 */
int invalid_instruction(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
		line_number, opcode);
	return (EXIT_FAILURE);
}
/**
 * file_openerr - file open error message
 * @filename: file that failed to open
 * Return: number of nodes
 */
int file_openerr(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}
