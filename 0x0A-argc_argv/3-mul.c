#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplication of two numbers
 *
 * @argc: argument counter
 * @argv: argument vecor
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
