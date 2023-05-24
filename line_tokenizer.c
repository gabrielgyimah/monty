#include "monty.h"

int _line_tokenizer(char * current_line)
{
    char *token;
    char *cmd;
    char *cmd_val;
    int actual_val;
    int counter = 0;

    token = strtok(current_line, " ");

    while(token != NULL)
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
        token = strtok(NULL, " ");
        counter++;
    }

    actual_val = atoi(cmd_val);
    printf("%s\n", cmd);
    printf("%d\n", actual_val);
    printf("%d\n", counter);

    return (0);
}