#include "monty.h"
/**
 * blow - expands stings and couple
 * @holder: This is the stringto be blown
 * Return: Pointer to array of string or nothing
 */
char **blow(char *holder)
{
	char *hold, *cpy, *end;
	char **hldr;
	int k, j;

	end = " \n\t";
	k = 0;
	j = 0;

	if (holder != NULL)
	{
		cpy = _strdup(holder);
		hold = strtok(cpy, end);
		while (hold)
		{
			j++;
			hold = strtok(NULL, end);
		}
		if (j == 0)
		{
			free(cpy)
			return (NULL);
		}
		hldr = malloc(sizeof(char *) * (j + 1));
		if (hldr == NULL)
			return (NULL);
		hold = strtok(holder, end);
		while (hold != NULL)
		{
			hldr[k] = _strdup(hold);
			k++;
			hold = strtok(NULL, end);
		}
		hldr[j] = NULL;
		free(cpy);
		return (hldr);
	}
	if (holder == NULL)
		return (NULL);
}
