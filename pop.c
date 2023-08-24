#include "monty.h"
/**
 * pop - Pops the top element of the stack
 * @s: double pointer to top of stack
 * @iloc: line number of the OPcode
 */
void pop(stack_t **s, unsigned int iloc)
{
	stack_t *buffer = *s;

	if (*s == NULL || s == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", iloc);
		exit(EXIT_FAILURE);
	}
	(*s) = (*s)->next;

	if (*s != NULL)
		(*s)->prev = NULL;
	free(buffer);
}
