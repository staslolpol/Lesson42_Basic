#include "util.h"


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
	reverse(array, lenght);

	// output
	cout << "result array: ";
	for (int index = 0; index < lenght; index++)
	{
		cout << array[index] << " ";
	}



	return 0;
}