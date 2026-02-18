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

	user_init(array, lenght);


	//logic
	reverse(array, lenght);

	// output
	print("Result array: ");
	print(convert(array, lenght));

	return 0;
}