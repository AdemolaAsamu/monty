#include "monty.h"
/**
 * swap - swaps the head and the following lin
 * @stack: double pointer to head of stack
 * @line_number: line number in
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *buffer = *stack;


	if (buffer == NULL || buffer->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		*stack = buffer->next;
		(*stack)->prev = NULL;
		buffer->prev = *stack;
		buffer->next = (*stack)->next;
		(*stack)->next = buffer;
	}
}
