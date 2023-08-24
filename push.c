#include "monty.h"
/**
 * push - this pushes a new node to stack from top
 * @stack: is the stack to be added
 * @line_number: number of line
 */
void push(stack_t **stack, __attribute__((unused))unsigned int line_number)
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
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((check_int(exec) == 0))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	count = atoi(exec);
	if (!stack)
		return;
	to_add->n = count;
	to_add->prev = NULL;
	to_add->next = NULL;
	if (*stack == NULL)
		*stack = to_add;
	else
	{
		to_add->next = *stack;
		(*stack)->prev = to_add;
		*stack = to_add;
	}
}

/**
 * push_que - This pushes into the stack from behind
 * @stack: stack to be added
 * @line_number: location of the line
 */
void push_que(stack_t **stack, __attribute((unused))unsigned int line_number)
{
	stack_t *buffer, *to_add = malloc(sizeof(stack_t));
	int count;

	if (to_add == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (exec == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (check_int(exec) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	count = atoi(exec);
	if (to_add == NULL)
	{
		fprintf(stderr, "Error:malloc failed\n");
		exit(EXIT_FAILURE);
	}
	if (!stack)
		return;
	to_add->n = count;
	to_add->prev = NULL;
	to_add->next = NULL;
	if (*stack == NULL)
		*stack = to_add;
	else
	{
		buffer = *stack;
		while (buffer->next != NULL)
			buffer = buffer->next;
		buffer->next = to_add;
		to_add->prev = buffer;
	}
}
