#include "monty.h"
/**
 * adde - Adds the top elements of the stack
 * @stack: double pointer to top of stack
 * @line_number: line number of the OPcode
 */
void adde(stack_t **stack, unsigned int line_number)
{
	int total = 0;
	stack_t *buffer = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack is too short\n", line_number);
		free_lists(*stack);
		exit(EXIT_FAILURE);
	}
	(*stack) = (*stack)->next;

	total = buffer->n + buffer->next->n;
	(*stack)->n = total;
	free(buffer);
	(*stack)->prev = NULL;
}
