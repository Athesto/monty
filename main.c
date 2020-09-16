#include "monty.h"
#define BUFFSIZE 2048
vars vars_t;
/**
 * main - Principal fu
 * @ac: cant input
 * @av: array
 * Return: sucess if it is
 */
int main(int ac, char **av)
{
    char *opcode;
    void (*funct)(stack_t **, unsigned int) = NULL;

    if (ac != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        return (EXIT_FAILURE);
    }

    if (start_vars(&vars_t) != 0)
    {
        return (EXIT_FAILURE);
    }
    vars_t.file = fopen(av[1], "r");

    while (!vars_t.file)
    {

        return (EXIT_FAILURE);
    }

    while (getline(&vars_t.buff, &vars_t.sizz, vars_t.file) != EOF)
    {
        opcode = strtok(vars_t.buff, " \n\t\r");
        if (opcode[0] == '#')
            continue;
        if (opcode)
        {
            funct = get_opp(opcode);
            if (funct != NULL)
                funct(&vars_t.h, vars_t.line_number);
            else
            {
                fprintf(stderr, "L%u: unknown instruction %s\n", vars_t.line_number, opcode);
                freeAll();
                return (EXIT_FAILURE);
            }
        }
        vars_t.line_number++;
    }
    freeAll();
    return (EXIT_SUCCESS);
}
