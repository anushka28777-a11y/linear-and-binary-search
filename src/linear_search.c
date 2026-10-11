#include "search.h"

int linear_search(const int array[], int size, int target)
{
    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            return i;
        }
    }

    return -1;
}
