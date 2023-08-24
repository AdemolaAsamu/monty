#include "monty.h"
/**
 * fail - for when there is no corresp fxn
 * @s: double pointer to stack
 * @iloc: this is the line number of error
 */
void fail(stack_t __attribute__((unused)) **s, unsigned int iloc)
{
	fprintf(stderr, "L%d: unknown instruction\n", iloc);
	exit(EXIT_FAILURE);
}
