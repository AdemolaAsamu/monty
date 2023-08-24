#include "monty.h"
/**
 * sub - Subtracts the top elements of the stack
 * @s: double pointer to top of stack
 * @iloc: line number of the OPcode
 */
void sub(stack_t **s, unsigned int iloc)
{
	int total = 0;

	if (*s == NULL || (*s)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack is too short\n", iloc);
		free_lists(*s);
		exit(EXIT_FAILURE);
	}
	(*s) = (*s)->next;

	total = (*s)->n - (*s)->prev->n;
	(*s)->n = total;
	free((*s)->prev);
	(*s)->prev = NULL;
}
