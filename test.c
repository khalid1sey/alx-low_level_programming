#include <stdio.h>
#include <stdlib.h>

int main(void){
    

    /*Pointer basics*/
    int x = 10;
    int *px = &x;
    printf("\n");
    printf("The assigned value of variable x is : %i\n", x);
    printf("The adress of the variable x is : %p\n", &x);
    printf("The value of pointer variable px is : %p\n", px);
    printf("The adress of pointer variable px is : %p\n", &px);
    printf("The value of pointer px which points to x adress : %i\n", *px);

    /*This shows the mechanism of derefrencing*/
    *px = 20;

    printf("The updated value of pointer x : %i\n", *px);
    printf("\n");


    long a = 25;
    long *pa = &a;
    long **qa = &pa; /*pointer to a pointer type long*/

    printf("%p \n", &a);
    printf("%p \n", pa);
    printf("%p \n", &pa);
    printf("%p \n", qa);
    printf("%p \n", &qa);
    return 0;
}