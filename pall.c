#include "monty.h"
/**
 * pall - prints all the values of the stack
 * @stack: double poointer to stack
 * @line_number: line number
 */
void pall(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	stack_t *buffer = *stack;

	printf("I got there");
	if (*stack == NULL)
		return;
	while (buffer != NULL)
	{
		printf("%d\n", buffer->n);
		buffer = buffer->next;
	}

}
