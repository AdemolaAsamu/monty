#include "monty.h"
/**
 * main - Thi sis the main entry file
 * @count: this is argument count
 * @value: pointer containing all arguments
 * Return: 0 for success
 */
int main(int count, char **value)
{
	char *gap = NULL, **prim;
	stack_t *head = NULL;
	FILE *fd;
	unsigned int iloc = 0, state = 0;
	size_t str_len = 0;

	confirm_input(count);
	fd = fopen(value[1]);
	if (fd == NULL)
		open_fqil(value[1]);
	while (getline(&gap, &str_len, fd) != -1)
	{
		iloc++;
		prim = blow(gap);
		if (!prim)
			continue;
		if (prim[0][0] == '#')
		{
			free_prim(prim);
			continue;
		}
		if (strcmp(prim[0], "queue") || !strcmp(prim[0], "stack"))
		{
			state = mode_chckr(prim[0]);
			free_prim(prim);
			continue;
		}
		argument = prim[1];
		if (!(handle_function(prim[0], iloc)))
			error(gap, prim, iloc, head, fd);
		if (state && (!strcmp(prim[0], "push")))
			handle_function("queue", iloc)(&head, iloc);
		else
			handle_function(prim[0], iloc)(&head, iloc);
		free_prim(prim);
	}
	fclose(fd);
	free(gap);
	free_lists(head);
	return (0);
}
