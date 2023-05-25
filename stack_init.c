#include "monty.h"

/**
 * stack_init - sThis initializes the stack (stack creation)
 * 
 * Return: The stack (pointer to the head of the stack) 
 */

stack_t *stack_init(void)
{
    stack_t *new_node;
    new_node = malloc(sizeof(stack_t));

    if (!new_node)
    {
        fprintf(stderr, "Error: malloc failed");
        exit(EXIT_FAILURE);
    }

    new_node->n = STACK_MODE;
    new_node->prev = NULL;
    new_node->next = NULL;
    return (new_node);
}

/**
 * check_mode - checks if stack_t(DLL) is in stack mode
 * stack mode 
 * 
 * @s: Pointer to top of stack or bottom of queue
 *
 * Return: stack_mode(0), queue_mode(1), or 2
 */

int check_mode(stack_t *s)
{
    if (s->n == STACK_MODE)
    {
        return (STACK_MODE);
    }

    else if (s->n == QUEUE_MODE)
    {
        return (QUEUE_MODE);
    }

    return (2);
}