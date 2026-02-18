#include <iostream>

#define DEFAULT_SIZE 100

using namespace std;
int main() {
	int array[DEFAULT_SIZE];
	int lenght;

	do {
		system("cls");
		cout << "Input size of array: ";
		cin >> lenght;
	} while (lenght <= 0);

	cout << "Input your array elements: ";
	for (int index = 0; index < lenght; index++)
	{
		cin >> array[index];
	}

	
	//logic
	int n = lenght / 2;
	for (int index = 0; index < n; index++)
	{
		int temp = array[index];
		array[index] = array[lenght - 1 - index];
		array[lenght - 1 - index] = temp;
	}

	// output
	cout << "result array: ";
	for (int index = 0; index < lenght; index++)
	{
		cout << array[index] << " ";
	}

	

	return 0;
}