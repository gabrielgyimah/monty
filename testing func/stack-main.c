#include "monty.h"

/**
 * stack_init - sThis initializes the stack (stack creation)
 * 
 * Return: The stack (pointer to the head of the stack) 
 */

stack_t *stack_init(void)
{
    stack_t *first;
    first = malloc(sizeof(stack_t));

    if (!first)
    {
        fprintf(stderr, "Error: malloc failed");
        exit(EXIT_FAILURE);
    }

    first->n = STACK_MODE;
    first->prev = NULL;
    first->next = NULL;
    return (first);
}

/**
 * check_mode - checks if stack_t(DLL) is in stack mode
 * stack mode 
 * 
 * @s: Pointer to top of stack or bottom of queue
 *
 * Return: stack_mode(0), queue_mode(1), or 2
 */

int main()
{
    stack_t *ptr;
    ptr = stack_init();

    push_func(&ptr, 10);
    push_func(&ptr, 20);
    push_func(&ptr, 30);
    
    pall_func(ptr);
    return (0);
}