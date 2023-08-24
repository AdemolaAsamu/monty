#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <ctype.h>
#include <stddef.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern char *exec;

char **blow(char *holder);
void (*handle_functions(char *state, unsigned int l))(stack_t **stack, unsigned int);
char *compd(char *buf);
void open_fail(char *buf);
unsigned int mode_chckr(char *OP);
void error(char *buf, char **turnOP, unsigned int l,  stack_t *head, FILE *fp);
void confirm_input(int count);
void free_prim(char **prim);
int check_int(const char *input);
void fail(stack_t **s, unsigned int iloc);
void free_lists(stack_t *head);
void adde(stack_t **s, unsigned int iloc);
void dive(stack_t **s, unsigned int iloc);
void push(stack_t **stack,unsigned int line_number);
void push_que(stack_t **stack, unsigned int line_number);
void nop(stack_t **s, unsigned int iloc);
void sub(stack_t **s, unsigned int iloc);
void pint(stack_t **s, unsigned int iloc);
void mul(stack_t **s, unsigned int iloc);
void mod(stack_t **s, unsigned int iloc);
void pchar(stack_t **s, unsigned int iloc);
void pstr(stack_t **stack, unsigned int iloc);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void swap(stack_t **s, unsigned int iloc);
void pop(stack_t **s, unsigned int iloc);
void pall(stack_t **stack, unsigned int line_number);
#endif
