#include "monty.h"

/**
 * line_tokenizer - splits the current line into toke
 *
 * @current_line: the string being split
 *
 * Return: success
 */

int line_tokenizer(char *current_line)
{
	char *token;
	char *cmd;
	char *cmd_val;
	int actual_val;
	int counter = 0;

	token = strtok(current_line, " ");

	while (token != NULL)
	{
		if (counter == 0)
		{
			cmd = token;
		}
		else if (counter == 1)
		{
			cmd_val = token;
		}
		els
		{
			return (1);
		}
		counter++;
		token = strtok(NULL, " ");
	}
	actual_val = atoi(cmd_val);
	printf("Actual command: %s\n", cmd);
	printf("command value: %d\n", actual_val);

	return (0);
}
