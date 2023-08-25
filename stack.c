#include "monty.h"
#include <string.h>

void free_stack(stack_t **stack);
int init_stack(stack_t **stack);
int check_mode(stack_t *stack);

/**
 * free_stack - Frees memory associated with a stack_t linked list.
 * @stack: A pointer to the top (stack) or bottom (queue) of a stack_t linked list.
 */
void free_stack(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
/**
 * init_stack - Initializes a stack_t linked list with a starting stack node
 *              and an ending queue node.
 * @stack: A pointer to an uninitialized stack_t linked list.
 *
 * Return: EXIT_SUCCESS on successful initialization, EXIT_FAILURE on error.
 */
int init_stack(stack_t **stack)
{
	stack_t *s;

	s = malloc(sizeof(stack_t));
	if (s == NULL)
		return (malloc_error());

	s->n = STACK;
	s->prev = NULL;
	s->next = NULL;

	*stack = s;

	return (EXIT_SUCCESS);
}

/**
 * check_mode - Checks the mode of a stack_t linked list (stack or queue).
 * @stack: A pointer to the top (stack) or bottom (queue) of a stack_t linked list.
 *
 * Return: STACK (0) if the stack_t is in stack mode, QUEUE (1) if it's in queue
 *         mode, or 2 if it's in an undefined mode.
 */
int check_mode(stack_t *stack)
{
	if (stack->n == STACK)
		return (STACK);
	else if (stack->n == QUEUE)
		return (QUEUE);
	return (2);
}























