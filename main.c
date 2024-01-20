#include "monty.h"
busy_t busy = {NULL, NULL, NULL, 0};
/**
* main - main entry point
* @argc: number of arguments
* @argv: arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *cont;
	FILE *file;
	size_t buffsize = 0;
	size_t line;
	unsigned int line_number = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	busy.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (line > 0)
	{
		cont = NULL;
		line = getline(&cont, &buffsize, file);
		busy.linecontent = cont;
		line_number++;
		if (line > 0)
		{
			_montyexec(cont, &stack, line_number, file);
		}
		free(cont);
	}
	_freestack(stack);
	fclose(file);
return (0);
}

