0x03. C - Debugging

debugging is process of findining or resolving bugs(errors pr problems that prevent correct operation) within computer program.
it involves
    interactive debugging
    control flow analysis
    unit testing
    integretion testing
    monitoring application and system level
    memory dumps and profiling



Requirements
General

    Allowed editors: vi, vim, emacs
    All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All your files should end with a new line
    Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    A README.md file at the root of the repo, containing a description of the repository
    A README.md file, at the root of the folder of this project (i.e. 0x03-debugging), describing what this project is about




0. Multiple mains
mandatory

In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:

carrie@ubuntu:/debugging$ cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
carrie@ubuntu:/debugging$

carrie@ubuntu:/debugging$ cat main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */
carrie@ubuntu:/debugging$ 

carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
carrie@ubuntu:/debugging$ ./a.out
98 is positive
carrie@ubuntu:/debugging$

Based on the main.c file above, create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0.

You are not coding the solution / function, you’re just testing it! However, you can adapt your function from 0x01. C - Variables, if, else, while - Task #0 to compile with this main file to test locally.

    You only need to upload 0-main.c and main.h for this task. We will provide our own positive_or_negative() function.
    You are not allowed to add or remove lines of code, you may change only one line in this task.

carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
carrie@ubuntu:/debugging$ ./0-main
0 is zero
carrie@ubuntu:/debugging$ wc -l 0-main.c
16 1-main.c
carrie@ubuntu:/debugging$ 



1. Like, comment, subscribe
mandatory

Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.

    Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
    You do not have to compile with -Wall -Werror -Wextra -pedantic for this task.
