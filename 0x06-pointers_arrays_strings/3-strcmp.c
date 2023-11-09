/**
 * _strcmp - compares given two string
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: Always 0i
 *
 */

int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
	if (*s1 != *s2)
	{
	return (*s1 - *s2);
	}
	s1++;
	s2++;
	}
	return (0);
}
