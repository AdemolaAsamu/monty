#include "monty.h"
/**
 * handle_functions - Picks the function
 * @state: This is string passed to fxn
 * @l: This is the line number
 * Return: A pointer to the string
 */
void (*handle_functions(char *state, unsigned int l))(stack_t **stack, unsigned int)
{
	int k = 0;

	instruction_t op[] = {
		{"push", push},
		{"add", adde},
		{"nop", nop},
		{"pall", pall},
		{"sub", sub},
		{"pint", pint},
		{"swap", swap},
		{"mul", mul},
		{"div", dive},
		{"pop", pop},
		{"pchar", pchar},
		{"mod", mod},
		{"pstr", pstr},
		{"rotr", rotr},
		{"rotl", rotl},
		{"queue", push_que},
		{NULL, NULL}};
	(void)l;


	while (op[k].opcode != NULL)
	{
		if (!strcmp(state, op[k].opcode))
			return (op[k].f);
		k++;
	}
	return (NULL);
}
