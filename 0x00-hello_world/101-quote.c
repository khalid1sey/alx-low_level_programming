#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _puts - prints string to console
 * 
 * @str: the string text
 * 
 * return: 0
*/
void _puts(const char *str) {
	int len = strlen(str);
	int i = 0;

	for (i = 0; i < len; i++)
	{
		printf("%c", str[i]);
	}
}
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	_puts("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}