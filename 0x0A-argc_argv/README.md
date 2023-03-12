General Instructions for Given Project  (0x0A-argc_argv)
1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
9. Don’t forget to push your header file
10. You are allowed to use the standard library


Task 0: For this task, I will write a program that prints its name, followed by a new line.
If you rename the program, it will print the new name, without having to compile it again
You should not remove the path before the name of the program
The command can be found in the executable file: 0-whatsmyname.c


Task 1: For this task, i will write a function that copies memory area.
Using Prototype: void _print_rev_recursion(char *s);
The command can be found in the executable file: 1-args.c


Task 2: For this task, i will write a program that prints all arguments it receives.
All arguments should be printed, including the first one
Only print one argument per line, ending with a new line
The command can be found in the executable file: 22-args.c


Task 3: For this task, I will write a program that multiplies two numbers.
The program should print the result of the multiplication, followed by a new line
You can assume that the two numbers and result of the multiplication can be stored in an integer
If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1
The command can be found in the executable file: 3-mul.c


Task 4: For this task, I will write a program that adds positive numbers.
Print the result, followed by a new line
If no number is passed to the program, print 0, followed by a new line
If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
You can assume that numbers and the addition of all the numbers can be stored in an int
The command can be found in the executable file: 4-add.c


Task 5: For this task, I will write a function that returns the natural square root of a number.
Using Prototype: int _sqrt_recursion(int n);
If n does not have a natural square root, the function should return -1
The command can be found in the executable file: 5-sqrt_recursion.c


Task 6: For this task, I will write a program that prints the minimum number of coins to make change for an amount of money.
Usage: ./change cents
where cents is the amount of cents you need to give back
if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
you should use atoi to parse the parameter passed to your program
If the number passed as the argument is negative, print 0, followed by a new line
You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
The command can be found in the executable file:  100-change.c
