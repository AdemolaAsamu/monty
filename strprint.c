#include "monty.h"
/**
 * pstr - function prints str from stack
 * @stack: double pointer to stack
 * @line_number: line number
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	int count;
	stack_t *buffer = *stack;
	(void)line_number;

	if (!*stack)
	{
		printf("\n");
		return;
	}

	while (buffer)
	{
		count = buffer->n;
		if (count > 0 && count <= 127)
		{
			printf("%c", count);
			buffer = buffer->next;
		}
		else
			break;
	}
	printf("\n");
}
