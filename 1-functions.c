#include "monty.h"
/**
 * start_vars - Funtion to inicializate and make malloc
 * @vars: Structure element
 */
void start_vars(vars *vars)
{
    vars->file = NULL;
    vars->buff = NULL;
}

void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp = *stack;
    (void)line_number;
    if (!tmp)
        return;
    while (tmp)
    {
        print("%d\n", tmp->n);
        tmp = tmp->next;
    }
}
void push(stack_t **stack, unsigned int line_number)
{
}
void pall(stack_t **stack, unsigned int line_number)
{
}
void mod(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
}
