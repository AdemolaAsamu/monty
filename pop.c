#include "monty.h"
/**
 * pop - Pops the top element of the stack
 * @stack: double pointer to top of stack
 * @line_number: line number of the OPcode
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *buffer = *stack;

	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack) = (*stack)->next;

	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(buffer);
}
