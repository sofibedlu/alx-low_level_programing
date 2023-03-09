Write a program that prints all possible combinations of two two-digit numbers.

The numbers should range from 0 to 99
The two numbers should be separated by a space
All numbers should be printed with two digits. 1 should be printed as 01
The combination of numbers must be separated by comma, followed by a space
The combinations of numbers should be printed in ascending order
00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar eight times maximum in your code
You are not allowed to use any variable of type char
All your code should be in the main function

/***/

julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
julien@ubuntu:~/0x01$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
