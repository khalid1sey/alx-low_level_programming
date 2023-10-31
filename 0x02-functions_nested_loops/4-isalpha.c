#include "main.h"
#include <stdlib.h>

/**
 * _isalpha - a function that checks lowercase character.
 *
 *@c: given character
 * Return: 1 (Success) | 0 
*/
int _isalpha(int c)
{
    

    int i;
    int temp = c;

    for (i = 65; i <= 122; i++)
    {
        if (temp <= 65 && temp <= 122)
        {
            return (1);
        } else{
            return (0);
        }
    }
    return (0);
}
