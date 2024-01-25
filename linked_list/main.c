#include "main.h"

int main(void)
{
    listptr first = NULL;
    listptr second = NULL;

    malloc(first, sizeof(*first));
    malloc(second, sizeof(*second));

    strcpy(first->data, "BAT");
    strcpy(second->data, "CAT");
    
    first->next = second->data;
    second->next = NULL;

    free(first);
    free(second);
}