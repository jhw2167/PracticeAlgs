#include "main.h"


/*
	main implementation file houses main method and 
	serves as target file for program start
*/

int main(int c, char* v[]) {

	const int len = 5;
	int sortable[len] = { 25, 0, 17, 13, 5 };

	sort::beadSort(sortable, len);

	cout << "final array: " << endl;

	for (size_t j = 0; j != len; j++) {
		cout << "sortable: " << sortable[j] << endl;
	}

	return 0;
}