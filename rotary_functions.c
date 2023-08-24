#include "monty.h"
/**
 * rotr - entry function that inverses the stacks order
 * @stack: double pointer to the stack
 * @line_number: line number for the function
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *buffer, *new_buffer;
	(void) line_number;

	if (!*stack || !(*stack)->next)
		return;
	buffer = *stack;
	while (buffer->next)
		buffer = buffer->next;
	new_buffer = buffer->prev;
	new_buffer->next = NULL;
	buffer->prev = NULL;

	buffer->next = *stack;
	(*stack)->prev = buffer;
	*stack = buffer;
	/* realigned*/
}
/**
 * rotl - inverses upwards
 * @stack: double poointer to stack
 * @line_number: line number
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *buffer, *new_buffer;
	(void) line_number;

	if (!*stack || !(*stack)->next)
		return;
	buffer = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	buffer->next = NULL;
	new_buffer = *stack;
	while (new_buffer->next)
		new_buffer = new_buffer->next;
	new_buffer->next = buffer;
	buffer->prev = new_buffer;
}
