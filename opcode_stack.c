#include "monty.h"
/**
 * opcode_stack - decides whether command is stack or queue
 * @command: The current stack command
 * @actual_value: The corresponding value of the command
 * Return: 0 always
 */
int opcode_stack(char *command, int actual_value, int line_number)
{
	if (last_cmd_type == NULL || command == NULL)
		return (-1);
	else if (strncmp(command, "push ", 5) == 0 || strcmp(command, "push\n") == 0)
		printf("Push: Line%d\n", line_number);
	else if (strncmp(command, "pop ", 4) == 0 || strcmp(command, "pop\n") == 0)
		printf("Pop: Line%d\n", line_number);
	else if (strncmp(command, "pall ", 5) == 0 || strcmp(command, "pall\n") == 0)
		printf("Pall: Line%d\n", line_number);
	else if (strncmp(command, "pint ", 5) == 0 || strcmp(command, "pint\n") == 0)
		printf("Pint: Line%d\n", line_number);
	else if (strncmp(command, "swap ", 5) == 0 || strcmp(command, "swap\n") == 0)
		printf("Swap: Line%d\n", line_number);
	else if (strncmp(command, "add ", 4) == 0 || strcmp(command, "add\n") == 0)
		printf("Add: Line%d\n", line_number);
	else if (strncmp(command, "sub ", 4) == 0 || strcmp(command, "sub\n") == 0)
		printf("Sub: Line%d\n", line_number);
	else if (strncmp(command, "div ", 4) == 0 || strcmp(command, "div\n") == 0)
		printf("Div: Line%d\n", line_number);
	else if (strncmp(command, "mul ", 4) == 0 || strcmp(command, "mul\n") == 0)
		printf("Mul: Line%d\n", line_number);
	else if (strncmp(command, "mod ", 4) == 0 || strcmp(command, "mod\n") == 0)
		printf("Mod: Line%d\n", line_number);
	else if (strncmp(command, "pchar ", 6) == 0)
		printf("Pchar: Line%d\n", line_number);
	else if (strcmp(command, "pchar\n") == 0)
		printf("Pchar: Line%d\n", line_number);
	else if (strncmp(command, "pstr ", 5) == 0 || strcmp(command, "pstr\n") == 0)
		printf("Pstr: Line%d\n", line_number);
	else if (strncmp(command, "rotl ", 5) == 0 || strcmp(command, "rotl\n") == 0)
		printf("Rotl: Line%d\n", line_number);
	else if (strncmp(command, "rotr ", 5) == 0 || strcmp(command, "rotr\n") == 0)
		printf("Rotr: Line%d\n", line_number);
	else if (strncmp(command, "# ", 2) == 0 || strcmp(command, "#\n") == 0)
		printf("Comment: Line%d\n", line_number);
	else if (strncmp(command, "nop ", 4) == 0 || strcmp(command, "nop\n") == 0)
		printf("Nop: Line%d\n", line_number);
	else
	{
		fprintf(stderr, "Error: End of file L<%d>\n", line_number);
		/*exit(EXIT_FAILURE);*/
	}

	return (0);
}
