#include "monty.h"

int execute_monty(FILE *file_monty)
{
    char *current_line = NULL;
    size_t current_line_size = 0;
    int count = 0;

    while((getline(&current_line, &current_line_size, file_monty)) != -1)
    {
        count++;
        line_tokenizer(current_line, count);
    }

       return (0);
}
