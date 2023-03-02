This file contains the script name and descriptions for all tasks of 0x05. C - Pointers, arrays and strings

Task 0: For this task, the script will display a function that takes a pointer to an int as parameter and updates the value it points to to 98.
Prototype: void reset_to_98(int *n);

The command can be found in the executable file: 0-reset_to_98.c


Task 1: For this task, the script will display a function that swaps the values of two integers.
Prototype: void swap_int(int *a, int *b);
The command can be found in the executable file: 1-swap.c

Task 2: For this task, the script will display a function that prints a string, followed by a new line, to stdout.
Prototype: void _puts(char *str);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.
The command can be found in the executable file: 2-mul.c

Task 3: For this task, the script will display a function that prints the numbers, from 0 to 9, followed by a new line.
Prototype: void print_numbers(void);
You can only use _putchar twice in your code.
The command can be found in the executable file: 3-puts.c


Task 4: For this task, the script will display  a function that prints a string, in reverse, followed by a new line.
Prototype: void print_rev(char *s);
The command can be found in the executable file: 4-print_rev.c

Task 5: function that reverses a string.

Prototype: void rev_string(char *s);
The command can be found in the executable file: 5-rev_string.c

Task 6: For this task, the script will display a function that prints every other character of a string, starting with the first character, followed by a new line.
Prototype: void puts2(char *str);
The command can be found in the executable file: 6-puts2.c


Task 7: For this task, the script will display a function that prints half of a string, followed by a new line.

Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
The command can be found in the executable file: 7-puts_half.c


Task 8: For this task, the script will display a  function that prints n elements of an array of integers, followed by a new line.
Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf
The command can be found in the executable file: 8-print_array.c


Task 9: For this task, the script will display a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
Prototype: char *_strcpy(char *dest, char *src);

The command can be found in the executable file: 9-strcpy.c

Task 10: For this task, the script will display a function that convert a string to an integer.

Prototype: int _atoi(char *s);
The number in the string can be preceded by an infinite number of characters
You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
You are not allowed to use long
You are not allowed to declare new variables of “type” array
You are not allowed to hard-code special values
We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.

The command can be found in the executable file: 100-atoi.c

Task 11: For this task, the script will display a  program that generates random valid passwords for the program 101-crackme.
You are allowed to use the standard library
You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
man srand, rand, time
gdb and objdump can help
The command can be found in the executable file: 101-keygen.c