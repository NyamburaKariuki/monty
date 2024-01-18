#include "monty.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

char **token = NULL;
/**
 * main - main entry
 * @argc: number of arguments
 * @argv: arguments
 * Return: exit code
 */

/*token = {NULL, NULL, NULL, 0};*/
int main(int argc, char **argv)
{
	FILE *filefd = NULL;
	int exit_cd = EXIT_SUCCESS;

	if (argc != 2)
		return (args_error());
	filefd = fopen(argv[1], "r");
	if (filefd == NULL)
		return (file_openerr(argv[1]));
	exit_cd = _monty(filefd);
	fclose(filefd);
	return (exit_cd);
}
