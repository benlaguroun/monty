#include "monty.h"

/**
 * f_pop - This function removes the top element from the stack.
 *
 * @head: A pointer to the stack's head.
 * @counter: The line number.
 *
 * Return: This function has no return value.
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
