#include "monty.h"
/**
 * mul - Multiply the top elements of the stack
 * @s: double pointer to top of stack
 * @iloc: line number of the OPcode
 */
void add(stack_t **s, unsigned int iloc)
{
	int total = 0;

	if (*s == NULL || (*s)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack is too short\n", iloc);
		free_lists(*s);
		exit(EXIT_FAILURE);
	}
	(*s) = (*s)->next;

	total = (*s)->n * (*s)->prev->n;
	(*s)->n = total;
	free((*)->prev);
	(*s)->prev = NULL;
}
