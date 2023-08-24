#include "monty.h"
/**
 * push - this pushes a new node to stack from top
 * @s: is the stack to be added
 */
void push(stack_t **s, __attribute__((unused))unsigned int iloc)
{
	stack_t *to_add = malloc(sizeof(size_t));
	int count;

	if (to_add == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (exec == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", iloc);
		exit(EXIT_FAILURE);
	}
	if ((check_int(exec) == 0))
	{
		fprintf(stderr, "L%d: usage: push integer\n", iloc);
		exit(EXIT_FAILURE);
	}
	count = atoi(exec);
	if (!s)
		return;
	to_add-> = count;
	to_add->prev = NULL;
	to_add->next = NULL;
	if (*s == NULL)
		*s = to_add;
	else
	{
		to_add->next = *s;
		(*s)->prev = to_add;
		*s = to_add;
	}
}
