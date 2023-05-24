#include "monty.h"

int main(int argc, char *argv[])
{
	int i = 1;
	FILE *file_to_be_read;
	char *path = argv[1];
	char *current_line = NULL;
	size_t current_line_size = 0;
	ssize_t read;

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

	while ((read = getline(&current_line, &current_line_size, file_to_be_read)) != -1)
		line_tokenizer(current_line);

	printf("\n");
	free(current_line);
	fclose(file_to_be_read);

	return (0);
}
