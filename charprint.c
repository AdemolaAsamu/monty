#include "monty.h"
/**
 * pchar - function that prints the first stack
 * @s: double poibnter to stack
 * @iloc: line number which code is
 */
void pchar(stact_t **s, unsigned int iloc)
{
	int count;

	if (!*s)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", iloc);
		exit(EXIT_FAILURE);
	}

	count = (*s)->n;
	if (count >= 0 && num <= 127)
		printf("%c\n", count);
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", iloc);
		exit(EXIT_FAILURE);
	}
}
