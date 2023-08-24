#include "monty.h"
/**
 * pchar - function that prints the first stack
 * @stack: double poibnter to stack
 * @line_number: line number which code is
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	int count;

	if (!*stack)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	count = (*stack)->n;
	if (count >= 0 && count <= 127)
		printf("%c\n", count);
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
}
