build:
	gcc -Wall -Werror -Wextra -pedantic *.c -o monty
	betty *.c
