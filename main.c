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

	vars_t.line_number = 1;
	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n"), freeAll();
		return (EXIT_FAILURE);
	}
	vars_t.file = fopen(av[1], "r");
	while (!vars_t.file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]), freeAll();
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
				fprintf(stderr, "L%u: unknown instruction %s\n", vars_t.line_number, opcode), freeAll();
				return (EXIT_FAILURE);
			}
		}
		vars_t.line_number++;
	}
	freeAll();
	return (EXIT_SUCCESS);
}
