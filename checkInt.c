#include "monty.h"
/**
 * check_int - fxn confirm number is int
 * @input: read input
 * Return: 0 for false and 1 for success
 */
int check_int(const char *input)
{
	if (input == NULL)
		return (0);
	if (*input == '\0')
		return (0);
	if (*input == '+' || *input == '-')
		input++;
	while (*input != '\0')
	{
		if (!isdigit(*input))
			return (0);
		input++;
	}
	return (1);
}
