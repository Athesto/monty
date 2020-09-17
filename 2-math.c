#include "monty.h"

/**
* add - ?
* @stack: ?
* @line_number: ?
 */
void add(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short", line_number);
		freeAll(), exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n + (*stack)->n;
	pop(stack, line_number);
}
/**
 * sub - ?
  * @stack: ?
 * @line_number: ?
 */
void sub(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short", line_number);
		freeAll(), exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n - (*stack)->n;
	pop(stack, line_number);
}
/**
 * mul - ?
  * @stack: ?
 * @line_number: ?
 */
void mul(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short", line_number);
		freeAll(), exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n * (*stack)->n;
	pop(stack, line_number);
}
/**
 * divide - ?
 * @stack: ?
 * @line_number: ?
 */
void divide(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short", line_number);
		freeAll(), exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero", line_number), freeAll();
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n = (*stack)->next->n / (*stack)->n;
	pop(stack, line_number);
}
/**
 * mod - ?
  * @stack: ?
 * @line_number: ?
 */
void mod(stack_t **stack, unsigned int line_number)
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short", line_number);
		freeAll(), exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero", line_number), freeAll();
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n % (*stack)->n;
	pop(stack, line_number);
}
