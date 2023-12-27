#include "sort.h"

/**
 * print_array - Print an array of integers.
 * @array: The array to print.
 * @size: The size of the array.
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    for (i = 0; i < size; i++)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
    }
    printf("\n");
}

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, len = size;
    bool swapped;

    if (array == NULL || size < 2)
        return;

    do
    {
        swapped = false;
        for (i = 0; i < len - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap_ints(array + i, array + i + 1);
                swapped = true;
            }
        }
        print_array(array, size);
        len--;
    }
    while (swapped);
}

