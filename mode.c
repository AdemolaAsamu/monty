#include "monty.h"
/**
 * mode_chckr - this checks if it is a stack or que
 * @s: Entry OP code
 * Return: 1 for queue or 0 for stack
 */
unsigned int mode_chckr(char *s)
{
	if (!strcmp(s, "queue"))
		return (1);
	return (0);
}

/**
 * open_fail - prints error message for open fail
 * @buf: Name of file
 * Return: void
 */
void open_fail(char *buf)
{
	fprintf(stderr, "Error: Can't open file %s\n", buf);
	exit(EXIT_FAILURE);
}
/**
 * error - error messages passed to std error
 * @buf: The instructions
 * @turn: reads out OP code
 * @l: reads the line number of incident
 * @head: head of the doubly linked list
 * @fd: file pointer
 * Return: void
 */
void error(char *buf, char **turn, unsigned int l, stack_t *head, FILE *fd)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", l, turn[0]);
	free(buf);
	free_prim(turn);
	free_lists(head);
	fclose(fd);
	exit(EXIT_FAILURE);
}
/**
 * confirm_input - This confirms the number of arguement
 * @count: The number of args passed
 */
void confirm_input(int count)
{
	if (count != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	else
		return;
}
