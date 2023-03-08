Write a program that prints the opcodes of its own main function.

Usage: ./main number_of_bytes
Output format:
the opcodes should be printed in hexadecimal, lowercase
each opcode is two char long
listing ends with a new line
see example
You are allowed to use printf and atoi
You have to use atoi to convert the argument to an int
If the number of argument is not the correct one, print Error, followed by a new line, and exit with the status 1
If the number of bytes is negative, print Error, followed by a new line, and exit with the status 2
You do not have to compile with any flags
Note: if you want to translate your opcodes to assembly instructions, you can use, for instance udcli.

/*terminal..*/

julien@ubuntu:~/0x0e. Function pointers$ gcc -std=gnu89 100-main_opcodes.c -o main
julien@ubuntu:~/0x0e. Function pointers$ ./main 21
55 48 89 e5 48 83 ec 30 89 7d dc 48 89 75 d0 83 7d dc 02 74 14
julien@ubuntu:~/0x0e. Function pointers$ objdump -d -j.text -M intel main
[...]
00000000004005f6 <main>:
  4005f6:   55                      push   rbp
  4005f7:   48 89 e5                mov    rbp,rsp
  4005fa:   48 83 ec 30             sub    rsp,0x30
  4005fe:   89 7d dc                mov    DWORD PTR [rbp-0x24],edi
  400601:   48 89 75 d0             mov    QWORD PTR [rbp-0x30],rsi
  400605:   83 7d dc 02             cmp    DWORD PTR [rbp-0x24],0x2
  400609:   74 14                   je     40061f <main+0x29>
[...]
julien@ubuntu:~/0x0e. Function pointers$ ./main 21 | udcli -64 -x -o 4005f6
00000000004005f6 55               push rbp
00000000004005f7 4889e5           mov rbp, rsp
00000000004005fa 4883ec30         sub rsp, 0x30
00000000004005fe 897ddc           mov [rbp-0x24], edi
0000000000400601 488975d0         mov [rbp-0x30], rsi
0000000000400605 837ddc02         cmp dword [rbp-0x24], 0x2
0000000000400609 7414             jz 0x40061f
julien@ubuntu:~/0x0e. Function pointers$

/****/
Note 0: je is equivalent to jz
Note 1: depending on how you write your main function, and on which machine you compile your program, the opcodes (and by extension the assembly code) might be different than the above example
