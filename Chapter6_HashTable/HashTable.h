#ifndef QUEUE_H
#define QUEUE_H

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

#define TABLE_SIZE (uint32_t)7u
#define MAX_NAME_SIZE (uint32_t)256u

typedef struct hash_table
{
} hash_table_t;

/**********************/
/*     FUNCTIONS      */
/**********************/

hash_table_t *createHashTable(void);

hash_table_t *freeHashTable(hash_table_t *hash_table);

void printHashTable(const hash_table_t *const hash_table);

uint32_t hash(const char key[MAX_NAME_SIZE]);

#endif // QUEUE_H
