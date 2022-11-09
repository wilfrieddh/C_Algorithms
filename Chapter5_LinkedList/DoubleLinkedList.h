#ifndef DOUBLE_LINKES_LIST_H
#define DOUBLE_LINKES_LIST_H

/*******************/
/*     INCLUDES    */
/*******************/

#include <math.h>
#include <stdbool.h>
#include <stdint.h>

/**********************/
/* DEFINES AND TYPES  */
/**********************/

typedef float value_type_t;
#define NO_VALUE (value_type_t)(INFINITY)

typedef struct list
{

} list_t;

/**********************/
/*     FUNCTIONS      */
/**********************/

list_t *createList(void);

list_t *freeList(list_t *list);

void printList(const list_t *const list);

#endif // DOUBLE_LINKES_LIST_H
