#include "logic.h"

void reverse(int array[DEFAULT_SIZE], int lenght) {
	int n = lenght / 2;
	for (int index = 0; index < n; index++)
	{
		int temp = array[index];
		array[index] = array[lenght - 1 - index];
		array[lenght - 1 - index] = temp;
	}

}