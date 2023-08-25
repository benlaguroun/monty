#include "monty.h"

/**
 * f_pall - This function prints the elements of the stack.
 *
 * @head: A pointer to the stack's head.
 * @counter: Not used.
 *
 * Return: This function has no return value.
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
