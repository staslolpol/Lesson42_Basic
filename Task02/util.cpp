#include "util.h"

void user_init(int array[DEFAULT_SIZE], int lenght) {
	cout << "Input your array elements: ";
	for (int index = 0; index < lenght; index++)
	{
		cin >> array[index];
	}
}

string convert(int array[DEFAULT_SIZE], int lenght) {
	string s = "";
	for (int index = 0; index < lenght; index++)
	{
		s += to_string(array[index]) + " ";
	}

	return s;
}

void print(string msg) {
	cout << msg ;
}