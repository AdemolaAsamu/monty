#include "monty.h"
/**
 * handle_functions - Picks the function
 * @state: This is string passed to fxn
 * @l: This is the line number
 * Return: A pointer to the string
 */
void *handle_functions(char *state, unsigned int l)
{
	int k = 0;

	instruction_t op[] = {
		{"push", push}, {"add", add}, {"nop", nop},
		{"pall", pall}, {"sub", sub}, {"pint", pint},
		{"swap", swap}, {"mul", mul}, {"div", div},
		{"pop", pop}, {"pchar", pchar}, {"mod", mod},
		{"pstr", pstr}, {"rotr", rotr}, {"rotl", rotl},
		{NULL, NULL}};
	(void)l;

	while (op[k].opcode != NULL)
	{
		if (!strcmp(s, op[k].opcode))
			return (op[k].f);
		k++;
	}
	return (NULL);
}
