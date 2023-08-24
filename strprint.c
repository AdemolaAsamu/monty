#include "monty.h"
/**
 * pstr - function prints str from stack
 * @s: double pointer to stack
 * @iloc: line number
 */
void pstr(stack_t *s, unsigned int iloc)
{
	int count;
	(void)iloc;
	stack_t *buffer = *s;

	if (!*s)
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
