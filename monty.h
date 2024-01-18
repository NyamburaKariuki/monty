#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

#define DELIMS "\n\a\t\b"
#define QUEUE 0
#define STACK 1
extern char **token;
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

/*More functions */
char *get_integer(int n);
int _initialize(stack_t **stack);
void buff(unsigned int n, unsigned int bs, char *buffer, int size);
unsigned int absolute (int x);
int baselen(unsigned int n, unsigned int bs);
unsigned int _tokenlen(void);
void _freetoks(void);
int check_delim(char *ln, char *dm);
char **_strtow(char *delim, char *s);
int _delim(char c, char *delim);
char *get_nw(char *s, char *delim);
int get_wc(char *s, char *delim);
int get_wl(char *s, char *delim);
unsigned int _tokenlen(void);
int op_mode(stack_t *stack);
int _monty(FILE *filefd);
void (*op_functions(char *opcode))(stack_t**, unsigned int);
void _freestack(stack_t **stack);

/* ERRORS*/
int file_openerr(char *filename);
int invalid_instruction(char *opcode, unsigned int line_number);
int nonint_error(unsigned int line_number);
int malloc_fail(void);
int args_error(void);
int pint_err(unsigned int line_number);
int pop_err(unsigned int line_number);
int division_error(unsigned int line_number);
int short_stak(unsigned int line_number);
int pchar_err(char *msg, unsigned int line_number);
void token_error(int code_error);

/* opcode functions */
void _pint(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _push(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void add_2_top(stack_t **stack, unsigned int line_number);
#endif
