#include "monty.h"

/**
 * pop - deletes the top of the stack
 *
 * @top: The top item in the stack
 *
 * Return: top
 */

stack_t *pop(stack_t **head)
{
	stack_t *temp = *head;
	temp->next = (*head)->next;
	temp->prev = (*head)->prev;
	temp->n = (*head)->n;

	head = head->next;
	
	fprintf(stdout, "%d", temp->n);
	free(temp);
	temp = NULL;

	return (top);
}
