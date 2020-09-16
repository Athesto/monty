#include "monty.h"

void (*get_opp(char *opcode))(stack_t **stack, unsigned int line_number)
{
    unsigned int i = 0;

    instruction_t ops[] = {
        {"push", push},
        {"pall", pall},
        // {"pint", pint},
        // {"pop", pop},
        // {"swap", swap},
        // {"add", add},
        {"nop", nop},
        // {"sub", sub},
        // {"div", divide},
        // {"mul", mul},
        // {"mod", mod},
        // {"pchar", pchar},
        // {"pstr", pstr},
        {NULL, NULL}};

    while (ops[i].opcode)
    {
        if (strcmp(ops[i].opcode, opcode) == 0)
            return (ops[i].f);
        i++;

        return (NULL);
    }
}
void freeAll(void)
{
    if (vars_st.buff != NULL)
        freeAll(vars_st.buff);
}
