#include <stdio.h>
#include "search.h"

#define MAX_SIZE 100

static void print_array(const int array[], int size)
{
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main(void)
{
    int array[MAX_SIZE];
    int size;
    int choice;
    int target;
    int index;

    printf("SEARCHING ALGORITHMS\n");
    printf("Enter number of elements (1-%d): ", MAX_SIZE);

    if (scanf("%d", &size) != 1 || size < 1 || size > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d integers in ascending order for binary search: ", size);
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &array[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    print_array(array, size);

    printf("\nChoose an algorithm:\n");
    printf("1. Linear Search\n");
    printf("2. Binary Search (array must be sorted)\n");
    printf("Enter choice: ");

    if (scanf("%d", &choice) != 1 || (choice != 1 && choice != 2)) {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Enter value to search: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid target value.\n");
        return 1;
    }

    if (choice == 1) {
        index = linear_search(array, size, target);
    } else {
        for (int i = 1; i < size; i++) {
            if (array[i] < array[i - 1]) {
                printf("Binary search requires an array sorted in ascending order.\n");
                return 1;
            }
        }
        index = binary_search(array, size, target);
    }

    if (index == -1) {
        printf("%d was not found in the array.\n", target);
    } else {
        printf("%d was found at index %d (position %d).\n",
               target, index, index + 1);
    }

    return 0;
}
