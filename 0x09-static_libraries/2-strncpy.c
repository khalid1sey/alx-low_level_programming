/**
 * *_strncpy - contacnates 2 variables
 *
 * @dest: string 1
 *
 * @src: string 2
 *
 * @n: integer
 *
 * Return: returns the pointer originalDest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *tmpdest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (tmpdest);

}
