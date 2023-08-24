#include "monty.h"
/**
 * div - Second divided by the first element
 * @s: double pointer to top of stack
 * @iloc: line number of the OPcode
 */
void div(stack_t **s, unsigned int iloc)
{
	int total = 0;
	stack_t *buffer = *s;

	if (s == NULL || *s == NULL || (*s)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack is too short\n", iloc);
		free_lists(*s);
		exit(EXIT_FAILURE);
	}
	if ((*s)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", iloc);
		free_lists(*s);
		exit(EXIT_FAILURE);
	}
	(*s) = (*s)->next;

	total = (*s)->n / (*s)->prev->n;
	(*s)->n = total;
	free((*s)->prev);
	(*s)->prev = NULL;
}
