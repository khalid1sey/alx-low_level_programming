#include "main.h"

/**
 * strcpy - a custom function to implement builtin strcpy
 * @src: source os string
 * @dest: destination
 * @n: bytes read
 * 
 * Return: copy of given string
*/
char *_strncpy(char *dest, char *src, int n)
{

    int i;
    
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    for (i = 0; i < n; i++)
    {
        dest =+ '\0'; 
    }

    return (dest);
}
