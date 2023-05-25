#include "monty.h"

/*
 * main - monty language compiler
 * Description - Compiles monty source code
 */

int main(int argc, char *argv[])
{
	int i = 1;
	FILE *file_to_be_read;
	char *path = argv[1];
	char *current_line = NULL;
	size_t line_size = 0;
	ssize_t read;
	int line_number = 0;

	if (argc > 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file_to_be_read = fopen(path, "r");

	if (file_to_be_read == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", path);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&current_line, &line_size, file_to_be_read)) != -1)
	{
		line_number++;
		if (ferror(file_to_be_read))
		{
			fprintf(stderr, "Error: Reading line L<%d>\n", line_number);
			exit(EXIT_FAILURE);
		}
		else if (feof(file_to_be_read))
		{
			fprintf(stderr, "Error: End of file L<%d>\n", line_number);
			exit(EXIT_FAILURE);
		}

		line_tokenizer(current_line, line_number);
	}

	printf("\n");
	free(current_line);
	fclose(file_to_be_read);

	return (0);
}
