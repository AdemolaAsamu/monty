#include "monty.h"
/**
 * rotr - entry function that inverses the stacks order
 * @s: double pointer to the stack
 * @iloc: line number for the function
 */
void rotr(stack_t **s, unsigned int iloc)
{
	stact_t *buffer, *new_buffer;
	(void) iloc;

	if (!*s || !(*s)->next)
		return;
	buffer = *s;
	while (buffer->next)
		buffer = buffer->next;
	new_buffer = buffer->prev;
	new_buffer->next = NULL;
	buffer->prev = NULL;

	buffer->next = *s;
	(*s)->prev = buffer;
	*s = buffer;
	/* realigned*/
}
/**
 * rotl - inverses upwards
 * @s: double poointer to stack
 * @iloc: line number
 */
void rotl(stack_t **s, unsigned int iloc)
{
	stack_t *buffer, *new_buffer;
	(void) iloc;

	if (!*s || !(*s)->next)
		return;
	buffer = *s;
	*s = (*s)->next;
	(*s)->prev = NULL;
	buffer->next = NULL;
	new_buffer = *s;
	while (new_buffer->next)
		new_buffer = new_buffer->next;
	new_buffer->next = buffer;
	buffer->prev = new_buffer;
}
