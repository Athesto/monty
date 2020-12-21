[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]

<div align="center"><img src="imagenes/monty.gif" width="700" height="300" />

# MONTY

Monty 0.98 is a scripting language that is first compiled into Monty byte codes. It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

Files containing Monty byte codes usually have the `.m` extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

---

# RESOURCES :books:

</div>
asdfadf
- [Data Structure and Algorithms - Stack](https://www.geeksforgeeks.org/introduction-linux-shell-shell-scripting/)
- [FIFO](<https://es.qwe.wiki/wiki/FIFO_(computing_and_electronics)>)

<div align="center">



---

## Let's start :warning:

</div>

```
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
./monty <file>
```
## Commands

| Opcode | Description |
|---------------- | -----------|
|push   | Pushes an element to stack |
|pall   | Prints all elements in stack |
|pint   | Prints first stack node|
|pop    | Removes last stack node |
|swap   | Inverts stack nodes positions |
|add    | Adds top two stack elements|
|nop    | Ignores command |
|sub    | Subtracts top two stack elements |
|div    | Divides top two stack elements |
|mul | Multiplies top two stack elements|
|mod    | Computes division remainder from top two stack elements|
|#      | Comments instruction|
|pchar  | Prints first stack element in ascii value |
|pstr   | Prints all stack elements in ascii value |
|rotl   | Sends first stack element to last position |
|rotr   | Send last stack element to first position |
|stack  | Sets stack format to LIFO (Last In First Out) |
|queue  | Sets stack format to FIFO (First In, First Out) |








---

### AUTHORS 
* [Gustavo Adolfo Mejía Sánchez](https://github.com/Athesto) :wolf:
* [Laura Perez Castillo](https://github.com/lperezcas16) :smiley_cat:

[contributors-shield]: https://img.shields.io/github/contributors/athesto/monty?style=flat-square
[contributors-url]: https://github.com/athesto/monty/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/athesto/monty.svg?style=flat-square
[forks-url]: https://github.com/athesto/monty/network/members
[stars-shield]: https://img.shields.io/github/stars/athesto/monty.svg?style=flat-square
[stars-url]: https://github.com/athesto/monty/stargazers
[issues-shield]: https://img.shields.io/github/issues/athesto/monty?style=flat-square
