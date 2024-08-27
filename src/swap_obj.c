#include "swap_obj.h"
#include <string.h>

void *swap_obj(void *a, void *b, size_t objSize)
{
    unsigned int temp[(objSize/sizeof(unsigned int)) + 1];
    memcpy(temp, a, objSize);
    memcpy(a, b, objSize);
    memcpy(b, temp, objSize);

    return a;
}