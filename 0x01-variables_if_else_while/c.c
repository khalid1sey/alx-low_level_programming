#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    int n, last_digit;  

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    printf("the number is: %i\n", n);
    last_digit = n % 10;
    printf("the last digit is : %i\n", last_digit);
    return 0;
}