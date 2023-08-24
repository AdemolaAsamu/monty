#include "monty.h"
/**
 * free_lists - frees up the linked list
 * @head: head of stack
 * Return: void
 */
void free_lists(stack_t *head)
{
	stack_t *buffer;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		buffer = head;
		head = head->next;
		free(buffer);
	}
}


/**
 * free_prim - Frees memomry of the prims
 * @prim: double pointer to str
 * Return: void
 */
void free_prim(char **prim)
{
	int l = 0;

	if (prim == NULL)
		return;
	while (prim[l] != NULL)
	{
		free(prim[l]);
		l++;
	}
	free(prim);
}
