#include "../monty.h"
#include <stdio.h> /* printf */
#include <stdlib.h> /* malloc/free */


int main()
{
	char *buf = NULL;
	char *opcode; /* pull */
	int val = 0; /* 1 */

	opcode = malloc(1024);

	buf = "pull 1";
	getinfo(buf, opcode, &val);
	printf("input: %s\nopcode: %s\nval: %i\n", buf, opcode, val);
	puts("----------------------");

	buf = "     pull 2";
	getinfo(buf, opcode, &val);
	printf("input: %s\nopcode: %s\nval: %i\n", buf, opcode, val);
	puts("----------------------");

	buf = "     pull        3";
	getinfo(buf, opcode, &val);
	printf("input: %s\nopcode: %s\nval: %i\n", buf, opcode, val);
	puts("----------------------");

	buf = "     pull        4               ";
	getinfo(buf, opcode, &val);
	printf("input: %s\nopcode: %s\nval: %i\n", buf, opcode, val);
	puts("----------------------");

	buf = "     pint";
	getinfo(buf, opcode, &val);
	printf("input: %s\nopcode: %s\nval: %i\n", buf, opcode, val);
	puts("----------------------");

	buf = "             ";
	getinfo(buf, opcode, &val);
	printf("input: %s\nopcode: %s\nval: %i\n", buf, opcode, val);
	puts("----------------------");

	buf = NULL;
	getinfo(buf, opcode, &val);
	printf("input: %s\nopcode: %s\nval: %i\n", buf, opcode, val);
	puts("----------------------");

	free(opcode);
	return (0);
}

