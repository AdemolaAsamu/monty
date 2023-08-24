#include "monty.h"
/**
 * add - Adds the top elements of the stack
 * @s: double pointer to top of stack
 * @iloc: line number of the OPcode
 */
void add(stack_t **s, unsigned int iloc)
{
	int total = 0;
	stack_t *buffer = *s;

	if (*s == NULL || (*s)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack is too short\n", iloc);
		free_lists(*s);
		exit(EXIT_FAILURE);
	}
	(*s) = (*s)->next;

	total = buffer->n + buffer->next->n;
	(*s)->n = total;
	free(buffer);
	(*s)->prev = NULL;
}
