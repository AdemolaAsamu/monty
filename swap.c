#include "monty.h"
/**
 * swap - swaps the head and the following lin
 * @s: double pointer to head of stack
 * @iloc: line number in
 */
void swap(stack_t **s, unsigned int iloc)
{
	stack_t *buffer = *s;


	if (buffer == NULL || buffer->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", iloc);
		exit(EXIT_FAILURE);
	}
	else
	{
		*s = buffer->next;
		(*s)->prev = NULL;
		buffer->prev = *s;
		buffer->next = (*s)->next;
		(*s)->next = buffer;
	}
}
