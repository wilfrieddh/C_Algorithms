#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "HashTable.h"

hash_table_t *createHashTable(void)
{
    hash_table_t *hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));

    if (NULL == hash_table)
    {
        return NULL;
    }

    return hash_table;
}

hash_table_t *freeHashTable(hash_table_t *hash_table)
{
    if (NULL == hash_table)
    {
        return NULL;
    }

    free(hash_table);

    return NULL;
}

void printHashTable(const hash_table_t *const hash_table)
{
    if (NULL == hash_table)
    {
        return;
    }
}

uint32_t hash(const char key[MAX_NAME_SIZE])
{
    uint32_t hash_value = 0u;

    for (uint32_t i = 0u; i < MAX_NAME_SIZE; i++)
    {
        if ('\0' != key[i])
        {
            hash_value = (hash_value * 128u + key[i]) % TABLE_SIZE;
        }
        else
        {
            break;
        }
    }

    return hash_value;
}
