#include "monty.h"

/**
 * pall - ?
 * @stack: ?
 * @line_number: ?
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void)line_number;
	if (!tmp)
		return;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
/**
 * pint - ?
 * @stack: ?
 * @line_number: ?
 */
void pint(stack_t **stack, unsigned int line_number)
{
	/* check if stack is valid or if stack is empty */
	if (!stack || !*stack)
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
/**
 * pchar - ?
 * @stack: ?
 * @line_number: ?
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
/**
 * pstr - ?
 * @stack: ?
 * @line_number: ?
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
