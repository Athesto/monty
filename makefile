build:
	gcc -g -Wall -Werror -Wextra -pedantic *.c -o monty
	betty *.c
