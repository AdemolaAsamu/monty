#include "monty.h"
/**
 * free_lists - frees up the linked list
 * @h: head of stack
 * Return: void
 */
void free_lists(stack_t *head)
{
	stack_t *buffer;

	if (h != NULL)
	{
		while (h != NULL)
		{
			buffer = h;
			h = h->next;
			free(buffer);
		}
	}
	else
		return;
}


/**
 * free_prim - Frees memomry of the prims
 * @prim: double pointer to str
 * Return: void
 */
void free_prim(char **prim)
{
	int l = 0;

	if (prim != NULL)
	{
		while (prim[l] != NULL)
		{
			free(prim[l]);
			l++;
		}
		free(prim);
	}
	else
		return;
}
