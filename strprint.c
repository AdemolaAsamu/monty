#include "monty.h"
/**
 * pstr - function prints str from stack
 * @s: double pointer to stack
 * @iloc: line number
 */
void pstr(stack_t **stack, unsigned int iloc)
{
	int count;
	stack_t *buffer = *stack;
	(void)iloc;

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
