#include "monty.h"
/**
 * compd - function that creates copy of a string
 * @buf: This si the string to be cpoied
 * Return: The copy of the string
 */
char *compd(char *buf)
{
	char *cpy = NULL, *cpy_paste;
	int k, w;

	if (buf == NULL)
		return (NULL);

	k = strlen(buf);
	w = k + 1;
	cpy = malloc(sizeof(char) * w);
	if (cpy == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	cpy_paste = cpy;
	while (*buf)
	{
		*cpy_paste = *buf;
		cpy_paste++;
		buf++;
	}
	*cpy_paste = '\0';
	return (cpy);
}
