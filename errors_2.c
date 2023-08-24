#include "monty.h"

int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/**
 * pop_error - Display error messages for pop operations on empty stacks.
 * @line_number: The line number in the script where the error occurred.
 *
 * Return: Always returns EXIT_FAILURE.
 */
int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pint_error - Display error messages for attempting to pint from empty stacks.
 * @line_number: The line number in the Monty bytecode file where the error occurred.
 *
 * Return: Always returns EXIT_FAILURE.
 */
int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * short_stack_error - Display error messages for Monty math functions
 *                     on stacks/queues with less than two nodes.
 * @line_number: The line number in the Monty bytecode file where the error occurred.
 * @op: The operation where the error occurred.
 *
 * Return: Always returns EXIT_FAILURE.
 */
int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}

/**
 * div_error - Display error messages for division by zero.
 * @line_number: The line number in the Monty bytecode file where the error occurred.
 *
 * Return: Always returns EXIT_FAILURE.
 */
int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pchar_error - Display error messages for pchar with empty stacks
 *               and non-character values.
 * @line_number: The line number in the Monty bytecode file where the error occurred.
 * @message: The corresponding error message to print.
 *
 * Return: Always returns EXIT_FAILURE.
 */
int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}


















