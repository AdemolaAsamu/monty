#include "monty.h"
/**
 * sub - Subtracts the top elements of the stack
 * @stack: double pointer to top of stack
 * @line_number: line number of the OPcode
 */
void sub(stack_t **stack, unsigned int line_number)
{
	int total = 0;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack is too short\n", line_number);
		free_lists(*stack);
		exit(EXIT_FAILURE);
	}
	(*stack) = (*stack)->next;

	total = (*stack)->n - (*stack)->prev->n;
	(*stack)->n = total;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
