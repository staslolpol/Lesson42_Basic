#include "logic.h"

int max(int array[DEFAULT_SIZE], int lenght) {
	int value = array[0];

	for (int index = 1; index < lenght; index++)
	{
		if (value < array[index]) {
			value = array[index];
		}
	}
	return value;
}
int min(int array[DEFAULT_SIZE], int lenght) {
	int value = array[0];

	for (int index = 1; index < lenght; index++)
	{
		if (value > array[index]) {
			value = array[index];
		}
	}
	return value;
}
double arifrehmetial_avg(int array[DEFAULT_SIZE], int lenght) {
	double avg = 0;

	for (int index = 0; index < lenght; index++)
	{
		avg += array[index];
	}

	return avg / lenght;
}
double geometrical_avg(int array[DEFAULT_SIZE], int lenght) {
	double avg = 1;

	for (int index = 0; index < lenght; index++)
	{
		avg *= array[index];
	}
	return pow(avg, 1.0 / lenght);
}
