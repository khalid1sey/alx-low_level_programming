/**
 * *_strncat - contacnates 2 variables
 *
 * @dest: string 1
 *
 * @src: string 2
 *
 * @n: integer
 *
 * Return: returns the pointer originalDest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tmpdest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (tmpdest);

}
