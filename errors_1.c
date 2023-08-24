#include "monty.h"

int usage_error(void);
int malloc_error(void);
int f_open_error(char *filename);
int unknown_op_error(char *opcode, unsigned int line_number);
int no_int_error(unsigned int line_number);

/**
 * usage_error - Display usage error messages.
 *
 * Return: Always returns EXIT_FAILURE.
 */
int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

/**
 * f_open_error - Display file opening error messages along with the file name.
 * @filename: The name of the file that failed to open.
 *
 * Return: Always returns EXIT_FAILURE.
 */
int f_open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}

/**
 * unknown_op_error - Display error messages for unknown instructions.
 * @opcode: The opcode where the error occurred.
 * @line_number: The line number in the Monty bytecode file where the error occurred.
 *
 * Return: Always returns EXIT_FAILURE.
 */
int unknown_op_error(char *opcode, unsigned int line_number)
{
	fprintf(stderr, "L%u: unknown instruction %s\n",
		line_number, opcode);
	return (EXIT_FAILURE);
}

/**
 * no_int_error - Display error messages for invalid monty_push arguments.
 * @line_number: The line number in the Monty bytecode file where the error occurred.
 *
 * Return: Always returns EXIT_FAILURE.
 */
int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}



















