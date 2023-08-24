#include "monty.h"
/**
 * pint - prints the first element of stack
 * @s: The pointer to stack
 * @iloc: the line number
 */
void pint(stack_t **s, unsigned int iloc)
{
	if (*s == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", iloc);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*s)->n);
}
