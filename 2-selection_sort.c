#include "sort.h"

/**
* selection_sort - sorts an array of integers in ascending order
* @array: array to be sorted
* @size: size of the array
* Return: 0
*/
void selection_sort(int *array, size_t size)
{
int *min;
size_t i, j;

if (array == NULL || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
min = array + i;
for (j = i + 1; j < size; j++)
min = (array[j] < *min) ? (array + j) : min;

if ((array + i) != min)
{
swap(array + i, min);
print_array(array, size);
}
}
}

/**
* swap - function that swap elements
* @el_one: first element
* @el_two: second element
* Return: 0
*/
void swap(int *el_one, int *el_two)
{
int temp;

temp = *el_two;
*el_two = *el_one;
*el_one = temp;
}
