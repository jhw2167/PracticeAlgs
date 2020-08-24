#include "main.h"


/*
	main implementation file houses main method and 
	serves as target file for program start
*/

int main(int c, char* v[]) {

	std::vector<int> sortable = { 25, 0, 17, 13, 5, 6, 15, 52, 37, 18 };
	int len = sortable.size();


	cout << "Hello array: " << endl;

	for (size_t j = 0; j != len; j++) {
		cout << "sortable: " << sortable[j] << endl;
	}

	//Call beadSort()
	//sort::beadSort(sortable, len);

	//Call quickSort()
	sort::quickSort(sortable, 0, len-1);

	cout << "\n\nFinal array: " << endl;

	for (size_t j = 0; j != len; j++) {
		cout << "sortable: " << sortable[j] << endl;
	}

	getchar();

	return 0;
}