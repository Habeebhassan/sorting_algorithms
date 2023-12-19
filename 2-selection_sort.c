#include "sort.h"
/**
  * selection_sort - selection sort algorithm
  * @array: sorted array
  * @size: size of array
  */
void selection_sort(int *array, size_t size)
{
	size_t i, i2;
	int min, temp, idx;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (i2 = i + 1; i2 < size; i2++)
		{
			if (min > array[i2])
			{
				min = array[i2];
				idx = i2;
			}
		}
		if (min != array[i])
		{
			temp = array[i];
			array[i] = min;
			array[idx] = temp;
			print_array(array, size);
		}
	}
}
