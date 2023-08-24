#include "monty.h"
/**
 * mod - function finding modulus
 * @stack: pointer to pointer to head of stack
 * @line_number: line number of the OPcode
 */
void mod(stack_t **stack, unsigned int line_number)
{
	int total = 0;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack is too short\n", line_number);
		free_lists(*stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free_lists(*stack);
		exit(EXIT_FAILURE);
	}
	(*stack) = (*stack)->next;

	total = (*stack)->n % (*stack)->prev->n;
	(*stack)->n = total;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
