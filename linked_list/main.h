#ifndef __MAIN__H__
#define __MAIN__H__


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct listNode *listptr;

typedef struct {
    char data[4];
    listptr next;
} listNode;

#endif