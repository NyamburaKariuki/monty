#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>
#include <stdarg.h>

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

/**
 * struct busy_s - doubly linked list representation of a stack (or queue)
 * @args: value
 * @file: pointer to the file
 * @linecontent: points to the next element of the stack (or queue)
 * @lift: flag to change from queue to stack and vs
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct busy_s
{
	char *args;
	FILE *file;
	char *linecontent;
	int lift;
}  busy_t;
extern busy_t busy;

void _pint(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _push(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void add_2_top(stack_t **stack, unsigned int line_number);
void _addn(stack_t **stack, int n);
void _multiply2(stack_t **stack, unsigned int line_number);
void _modulus(stack_t **stack, unsigned int line_number);
void _fstr(stack_t **stack, unsigned int line_number);

void _freestack(stack_t *stack);
void ifqueue(stack_t **stack, unsigned int line_number);
void _addq(stack_t **stack, int n);
void ifqueue(stack_t **stack, unsigned int line_number);
void ifstack(stack_t **stack, unsigned int line_number);
int _montyexec(char *linecontent, stack_t **stack, unsigned int line_number, FILE *file);
#endif
