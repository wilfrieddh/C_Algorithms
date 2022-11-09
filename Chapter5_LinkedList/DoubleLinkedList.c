#include <stdio.h>
#include <stdlib.h>

#include "DoubleLinkedList.h"

list_t *createList(void)
{
    list_t *list = (list_t *)malloc(sizeof(list_t));

    if (NULL == list)
    {
        return NULL;
    }

    list->front = NULL;
    list->back = NULL;
    list->size = 0u;

    return list;
}

list_t *freeList(list_t *list)
{
    if (NULL == list)
    {
        return NULL;
    }

    free(list);

    return NULL;
}

void printList(const list_t *const list)
{
}
