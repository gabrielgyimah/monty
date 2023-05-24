#include "monty.h"

int execute_monty(FILE *file_monty)
{
    char *curr_line = NULL;
    unsigned int line_size = 0;

    while((getline(&curr_line, &line_size, file_monty)) != -1)
    {
        _line_tokenizer(curr_line);
    }
       return (0);
}