#include "monty.h"
#include <string.h>

/**
 * op_functions - gets the right function for the opcode
 * @opcode: opcode
 * Return: pointer to the function
 */
void (*op_functions(char *opcode))(stack_t**, unsigned int)
{
	instruction_t funcs[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", add_2_top},
		{"nop", _nop},
		{NULL, NULL}
	};
	int x;

	for (x = 0; funcs[x].opcode; x++)
	{
		if (strcmp(opcode, funcs[x].opcode) == 0)
			return (funcs[x].f);
	}
	return (NULL);
}
