#include "monty.h"

/**
 * line_tokenizer - splits the current line into toke
 *
 * @current_line: the string being split
 *
 * Return: success
 */

char last_cmd_type[20];

int line_tokenizer(char *current_line)
{
	char *token;
	char *cmd;
	char *cmd_val;
	int actual_val;
	int counter = 0;
	char *cmd_type = NULL;

	token = strtok(current_line, " ");

	if (strncmp(token, "queue ", 6) == 0 || strcmp(token, "queue\n") == 0)
	{
		strcpy(last_cmd_type, token);
	}

	if (strncmp(token, "stack ", 6) == 0 || strcmp(token, "stack\n") == 0)
	{
		strcpy(last_cmd_type, token);
	}

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
		else
		{
			return (1);
		}
		counter++;
		token = strtok(NULL, " ");
	}
	actual_val = atoi(cmd_val);

	printf("Actual command: %s - Command Value: %d - Command mode: %s\n", cmd, actual_val, last_cmd_type);

	return (0);
}
