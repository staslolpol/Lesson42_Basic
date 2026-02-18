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

	int positive_sum = 0;
	int negative_sum = 0;

	for (int index = 0; index < lenght; index++)
	{
		positive_sum += array[index] > 0 ? array[index] : 0;
	}

	for (int index = 0; index < lenght; index++)
	{
		if (array[index] < 0) {
			negative_sum += array[index];
		}
	}

	cout << "Sum of positive element is " << positive_sum << '\n';
	cout << "Sum of negative element is " << negative_sum << '\n';


	return 0;
}