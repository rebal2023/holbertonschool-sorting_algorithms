#include "sort.h"

/**
* partition - use the Lomuto partition algorithm
* @array: array of integers to be sorted
* @lb: lower boundindex in array that begins partition
* @ub: upper bound index in array that ends partition
* @size: array size
* Return: new index at which to start new recursive partition
*/
int partition(int *array, int lb, int ub, size_t size)
{
int i, j, pivot, temp;

pivot = array[ub];
i = lb;
for (j = lb; j < ub; j++)
{
if (array[j] < pivot)
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
if (array[i] != array[j])
print_array(array, size);
i++;
}
}
temp = array[i];
array[i] = array[ub];
array[ub] = temp;
if (array[i] != array[ub])
print_array(array, size);
return (i);
}

/**
* quicksort - func that sorts array of integers in ascending order
* @array: array of integers to be sorted
* @lb: lower bound index in array that begins partition
* @ub: upper bound index in array that ends partition
* @size: number of elements in the array
*/
void quicksort(int *array, int lb, int ub, size_t size)
{
int p;

if (lb < ub)
{
p = partition(array, lb, ub, size);
quicksort(array, lb, p - 1, size);
quicksort(array, p + 1, ub, size);
}
}

/**
* quick_sort - func that sorts array of integers in ascending order
* @array: array of integers to be sorted
* @size: number of elements in the array
*/
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;

quicksort(array, 0, (int)size - 1, size);
}
