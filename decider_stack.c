#include "monty.h"
/**
 * opcode_stack - decides whether command is stack or queue
 * @command: The current stack command
 * @actual_value: The corresponding value of the command
 * Return: 0 always
 */
int opcode_stack(char *command, int actual_value)
{
	if (last_cmd_type == NULL || command == NULL)
		return (1);
	switch (command)
	{
		case "push":
			printf("Stack and push\n");
			break;
		case "pop":
			printf("Stack and pop\n");
			break;
		case "pall":
			printf("Stack and pall\n");
			break;
		case "add":
			printf("Stack and add\n");
			break;
		case "pint":
			printf("Stack and pint\n");
			break;
		case "swap":
			printf("Stack and swap\n");
			break;
		case "sub":
			printf("Stack and sub\n");
			break;
		case "div":
			printf("Stack and div\n");
			break;
		case "mul":
			printf("Stack and mul\n");
			break;
		case "mod":
			printf("Stack and mod\n");
			break;
		default:
			printf("Stack and default\n");
			break;
	}
	return (0);
}
