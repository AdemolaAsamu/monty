#include "monty.h"
/**
 * fail - for when there is no corresp fxn
 * @stack: double pointer to stack
 * @line_number: this is the line number of error
 */
void fail(stack_t __attribute__((unused)) **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: unknown instruction\n", line_number);
	exit(EXIT_FAILURE);
}
