#include "monty.h"

/**
 * main - The main function and start of the operation.
 * 
 * @argc: A count of the arguments on the command line
 * @argv:  An array of the arguments on the command line
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
    gen_stat status = {EXIT_SUCCESS};
    FILE *monty_file = NULL;
    char *s;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    monty_file = fopen(argv[1], "r");

    if(!monty_file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
    }
    status.stat = execute_monty(monty_file);
    fclose(monty_file);
    exit(status.stat);

    return 0;
}