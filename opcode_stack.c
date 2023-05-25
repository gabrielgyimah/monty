#include "monty.h"
/**
 * opcode_stack - decides whether command is stack or queue
 * @command: The current stack command
 * @actual_value: The corresponding value of the command
 * Return: 0 always
 */
int opcode_stack(char *command, int actual_value)
{
	stack_t *ptr;
	ptr = stack_init();
	if (last_cmd_type == NULL || command == NULL)
		return (-1);
	else if (strncmp(command, "push", 5) == 0 || strcmp(command, "push\n") == 0)
		push_func(&ptr, actual_value);
	else if (strncmp(command, "pop ", 4) == 0 || strcmp(command, "pop\n") == 0)
		pop(&ptr);
	else if (strncmp(command, "pall ", 5) == 0 || strcmp(command, "pall\n") == 0)
		pall_func(ptr);
	else if (strncmp(command, "pint ", 5) == 0 || strcmp(command, "pint\n") == 0)
		pint(&ptr);
	else if (strncmp(command, "swap ", 5) == 0 || strcmp(command, "swap\n") == 0)
		printf("Swap: \n");
	else if (strncmp(command, "add ", 4) == 0 || strcmp(command, "add\n") == 0)
		printf("Add: \n");
	else if (strncmp(command, "sub ", 4) == 0 || strcmp(command, "sub\n") == 0)
		printf("Sub: \n");
	else if (strncmp(command, "div ", 4) == 0 || strcmp(command, "div\n") == 0)
		printf("Div: \n");
	else if (strncmp(command, "mul ", 4) == 0 || strcmp(command, "mul\n") == 0)
		printf("Mul: \n");
	else if (strncmp(command, "mod ", 4) == 0 || strcmp(command, "mod\n") == 0)
		printf("Mod: \n");
	else if (strncmp(command, "pchar ", 6) == 0)
		printf("Pchar: \n");
	else if (strcmp(command, "pchar\n") == 0)
		printf("Pchar: \n");
	else if (strncmp(command, "pstr ", 5) == 0 || strcmp(command, "pstr\n") == 0)
		printf("Pstr: \n");
	else if (strncmp(command, "rotl ", 5) == 0 || strcmp(command, "rotl\n") == 0)
		printf("Rotl: \n");
	else if (strncmp(command, "rotr ", 5) == 0 || strcmp(command, "rotr\n") == 0)
		printf("Rotr: \n");
	else if (strncmp(command, "# ", 2) == 0 || strcmp(command, "#\n") == 0)
		printf("Comment: \n");
	else
		printf("Pusher: \n");

	return (0);
}
