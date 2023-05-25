#include "monty.h"

/**
 * push_func - pushes a value to the top of the stack
 * @top: head of the of the stack
 * @n: data stored
 *
 * Return: pointer to the top of stack
 */

stack_t *push_func(stack_t **top, const int n)
{
    stack_t *new_node;

    new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->n = n;

    if (*top == NULL)
    {
        new_node->next = NULL;
        new_node->prev = NULL;
        *top = new_node;
        return (*top);
    }

    else
    {
        new_node->next = *top;
        new_node->prev = NULL;
        (*top)->prev = new_node;
        (*top) = new_node;

        return (*top);
    }
}


#include "monty.h"

/**
 * pall_func - Prints the data stored
 * in a stack
 *
 * @top: top of the stack
 *
 * Return: size of the stack
 */
size_t pall_func(const stack_t *top)
{
        const stack_t *temp;
        int size = 0;
        temp = top;

    else if (s->n == QUEUE_MODE)
    {
        return (QUEUE_MODE);
    }

    return (2);
}
