#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: argument counter
 * @argv: argument vecor
 *
 * Return: always 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
