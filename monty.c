#include "monty.h"
/**
 * _montyexec - execute the desired op code
 * @linecontent: content of the line
 * @stack: pointer to top element in stack
 * @file: pointer to monty file
 * @line_number: line number
 * Return: nothing
 */
int _montyexec(char *linecontent, stack_t **stack, unsigned int line_number, FILE *file)
{
	instruction_t opfunc[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", add_2_top},
		{"nop", _nop},
		{"queue", ifqueue},
		{"stack", ifstack},
		{"mul", _multiply2},
		{"mod", _modulus},
		{"pstr", _fstr},
		{"pchar", _pchar},
		{NULL, NULL}
	};
	unsigned int x = 0;
	char *ops;

	ops = strtok(linecontent, " \n\t");
	if (ops && ops[0] == '#')
		return (0);
	busy.args = strtok(NULL, " \n\t");
	while (opfunc[x].opcode && ops)
	{
		if (strcmp(ops, opfunc[x].opcode) == 0)
		{
			opfunc[x].f(stack, line_number);
			return (0);
		}
		x++;
	}
	if (ops && opfunc[x].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, ops);
		fclose(file);
		free(linecontent);
		_freestack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
