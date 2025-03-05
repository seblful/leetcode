#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    int size;
    int *elements;
} RandomizedSet;

RandomizedSet *randomizedSetCreate()
{
    RandomizedSet *set = malloc(sizeof(RandomizedSet));
    set->size = 0;
    set->elements = NULL;

    return set;
}

bool randomizedSetInsert(RandomizedSet *obj, int val)
{
    for (int i = 0; i < obj->size; i++)
    {
        if (obj->elements[i] == val)
        {
            return false;
        }
    }

    obj->elements = (int *)realloc(obj->elements, (obj->size + 1) * sizeof(int));
    obj->elements[obj->size] = val;
    obj->size += 1;

    return true;
};

bool randomizedSetRemove(RandomizedSet *obj, int val)
{
    int idx = -1;

    for (int i = 0; i < obj->size; i++)
    {
        if (obj->elements[i] == val)
        {
            idx = i;
        }
    }

    if (idx == -1)
    {
        return false;
    }

    obj->elements[idx] = obj->elements[obj->size - 1];
    obj->size -= 1;
    obj->elements = (int *)realloc(obj->elements, obj->size * sizeof(int));

    return true;
}

int randomizedSetGetRandom(RandomizedSet *obj)
{
    int randIdx = rand() % obj->size;
    return obj->elements[randIdx];
}

void randomizedSetFree(RandomizedSet *obj)
{
    free(obj->elements);
    free(obj);
}
