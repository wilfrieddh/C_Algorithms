#include <stdint.h>
#include <stdio.h>

typedef float value_type_t;

void printArray(value_type_t arr[], uint32_t size)
{
    for (uint32_t i = 0u; i < size; i++)
    {
        if (i < size - 1u)
        {
            printf("%f, ", arr[i]);
        }
        else
        {
            printf("%f\n", arr[i]);
        }
    }
}


int main(void)
{
    value_type_t data[] = {-10, 20, -20, 40, 12};

    printArray(data, 5u);
    printArray(data, 5u);
}
