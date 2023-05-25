#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STACK_MODE 0
#define QUEUE_MODE 1
#define FAILURE -1

#define DELIM " \n\t\r\a\b"

/*Captures the current command mode*/
char last_cmd_type[20];

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */

typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct general_status
{
    int stat;

} gen_stat;

int line_tokenizer(char * current_line);
int execute_monty(FILE *file_monty);
stack_t *stack_init(void);


stack_t *push_func(stack_t **head, const int n);
size_t pall_func(stack_t *top);

int opcode_stack(char *command, int actual_value);
int opcode_queue(char *command, int actual_value);
stack_t *pint(stack_t **head);
stack_t *pop(stack_t **head);

#endif /* _MONTY_H_ */
