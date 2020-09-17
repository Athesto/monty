#include "monty.h"
/**
 * push - ?
 * @stack: ?
 * @line_number: ?
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL, *tm;
	unsigned int i = 0;
	int neg = 1;
	char *num = NULL;

	num = strtok(NULL, " \r\t\n");
	if (num == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		freeAll();
		exit(EXIT_FAILURE);
	} /* is a negative number?*/
	if (num[0] == '-')
		neg = -1, num++;
	while (num[i] != '\000' && num[i] != '\n')
	{
		if (_isdigit(num[i]) == 0)
		{
			fprintf(stderr, "L%u: usage: push integer\n", line_number),
				freeAll(), exit(EXIT_FAILURE);
		}
		i++;
	}
	tmp = malloc(sizeof(stack_t));
	if (!tmp)
	{
		fprintf(stderr, "Error: malloc failed\n");
		freeAll();
		exit(EXIT_FAILURE);
	}
	tmp->n = neg * atoi(num);
	tmp->next = NULL;
	if (!*stack)
		tmp->prev = NULL, *stack = tmp;
	else
	{
		tm = *stack;
		while (tm->next)
			tm = tm->next;
		tmp->prev = tm;
		tm->next = tmp;
	}
}
/**
 * pop - ?
  * @stack: ?
 * @line_number: ?
 */
void pop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
/**
 * swap - ?
  * @stack: ?
 * @line_number: ?
 */
void swap(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
/**
 * rotl - ?
  * @stack: ?
 * @line_number: ?
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
/**
 * rotr - ?
  * @stack: ?
 * @line_number: ?
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
