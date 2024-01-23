#include "sort.h"

/**
* bubble_sort - sorts array of int in ascending order (Bubble sort algorithm)
* @array: array
* @size: array size
* Return: 0
*/

void bubble_sort(int *array, size_t size)
{
size_t i, j;

if (!array)
return;

for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
if (array[j] > array[j + 1])
{
swap(&array[j], &array[j + 1]);
print_array(array, size);
}
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
int x;

x = *el_two;
*el_two = *el_one;
*el_one = x;
}
