0x07. C - Even more pointers, arrays and strings

A pointer to a pointer is a form of multiple indirection, or a chain of pointers. Normally, a pointer contains the address of a variable. When we define a pointer to a pointer, the first pointer contains the address of the second pointer, which points to the location that contains the actual value as shown below.

The most common C standard library functions used to manipulate strings are part of the <string.h> header. Here are some commonly used functions from this library:

strlen: Calculates the length of a string.
strcpy: Copies a string from one location to another.
strncpy: Copies a specified number of characters from one string to another.
strcat: Concatenates (appends) one string to the end of another.
strncat: Concatenates a specified number of characters from one string to the end of another.
strcmp: Compares two strings lexicographically.
strncmp: Compares a specified number of characters of two strings lexicographically.
strstr: Finds the first occurrence of a substring within a string.
strchr: Finds the first occurrence of a specified character in a string.
strtok: Breaks a string into a sequence of tokens based on a specified delimiter.
