
/**
 * *_strcat - contacnates 2 variables
 *
 * @dest: string 1
 *
 * @src: string 2
 *
 * Return: returns the pointer originalDest
 */

char *_strcat(char *dest, char *src)
{
	char *tmpdest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (tmpdest);

}
