#include "monty.h"
#include <stdio.h>
#include "globals.h"
/**
 * main - themain
 * @argc: argcounter
 * @argv: input form the stdin
 * Return: Return 0;
**/

stack_t *global_stack = NULL;
int main(int argc, char *argv[])
{
	char *line = NULL;
	size_t len = 0;
	unsigned int line_number = 0;
	size_t getline(char **lineptr, size_t *n, FILE *stream);

	FILE *file = fopen(argv[1], "r");

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	/* Initialize the global stack */
	global_stack = NULL;

	/*  Parse the file line by line and execute the instructions */

	while ((int)getline(&line, &len, file) != -1)
	{
		line_number++;
		/*  Parse the opcode and arguments from the line */
		/* Call the corresponding function pointer from instruction_t */
	}
	/*  Clean up and close the file */
	free(line);
	fclose(file);

	return (EXIT_SUCCESS);
}

