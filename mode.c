#include "monty.h"
/**
 * mode_chckr - this checks if it is a stack or que
 * @OP: Entry OP code
 * Return: 1 for queue or 0 for stack
 */
unsigned int mode_chckr(char *OP)
{
	if (!strcmp(OP, "queue"))
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
	fprint(stderr, "Error: Can't open file %s\n", buf);
	exit(EXIT_FAILURE);
}
/**
 * error - error messages passed to std error
 * @buf: The instructions
 * @turnOP: reads out OP code
 * @l: reads the line number of incident
 * @head: head of the doubly linked list
 * @fp: file pointer
 * Return: void
 */
void error(char *buf, char **turnOP, unsigned int l, FILE *fp, stack_t *head)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", l, turnOP[0]);
	free(buf);
	free_tok(turnOP);
	free_linkedlist(head);
	fclose(fp);
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
