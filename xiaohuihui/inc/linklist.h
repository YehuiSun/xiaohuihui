#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct LinkNode *LinkList;
struct LinkNode
{
    int  Data;
    LinkList Next;
};

#endif // LINKLIST_H_INCLUDED
