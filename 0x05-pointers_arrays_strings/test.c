#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	char *str = "My first strlen!";
	int i = 1;
	while (str[i] != '\0')
	{
		i++;
	}
	printf("%i", i);

	return i;
}