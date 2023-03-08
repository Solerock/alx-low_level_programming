General Instructions for Given Project  (0x08. C - Recursion)


1. Allowed editors: vi, vim, emacs
2. . All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
3. All your files should end with a new line
4. A README.md file, at the root of the folder of the project is mandatory
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
9. You are allowed to use _putchar
10. You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
11. In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
12. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
13. Don’t forget to push your header file
14. You are not allowed to use any kind of loops
15. You are not allowed to use static variables


Task 0: For this task, I will write a function that prints a string in reverse.
The command can be found in the executable file: 0-puts_recursion.c


Task 1: For this task, i will write a function that copies memory area.
Using Prototype: void _print_rev_recursion(char *s);
The command can be found in the executable file: 1-print_rev_recursion.c


Task 2: For this task, i will write a function that returns the length of a string.
The command can be found in the executable file: 2-strlen_recursion.c


Task 3: For this task, I will write a function that returns the factorial of a given number.
Using Prototype: int factorial(int n);
If n is lower than 0, the function should return -1 to indicate an error
Factorial of 0 is 1
The command can be found in the executable file: 3-factorial.c


Task 4: For this task, I will write a function that returns the value of x raised to the power of y.
Using Prototype: int _pow_recursion(int x, int y);
If y is lower than 0, the function should return -1
The command can be found in the executable file: 4-pow_recursion.c


Task 5: For this task, I will write a function that returns the natural square root of a number.
Using Prototype: int _sqrt_recursion(int n);
If n does not have a natural square root, the function should return -1
The command can be found in the executable file: 5-sqrt_recursion.c


Task 6: For this task, I will write a function that returns 1 if the input integer is a prime number, otherwise return 0.
Using Prototype: int is_prime_number(int n);
The command can be found in the executable file:  6-is_prime_number.c


Task 7: For this task, I will write a function that returns 1 if a string is a palindrome and 0 if not.
Using Prototype: int is_palindrome(char *s);
An empty string is a palindrome
The command can be found in the executable file: 100-is_palindrome.c

Task 8: For this task, I will write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
Using Prototype: int wildcmp(char *s1, char *s2);
s2 can contain the special character *.
The special char * can replace any string (including an empty string)
The command can be found in the executable file:101-wildcmp.c

