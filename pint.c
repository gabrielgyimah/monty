#include "monty.h"

/**
 * pint - prints the top of the stack
 *
 * @top: The top item in the stack
 *
 * Return: top
 */

stack_t *pint(stack_t **top)
{
	fprintf(stdout, "%d\n", (*top)->n);

	return (*top);
}
