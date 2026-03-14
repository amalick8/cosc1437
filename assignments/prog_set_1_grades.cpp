#include <iostream>
using namespace std;

int main() {

	int size = 10;
	int* grades = new int[size];  // dynamic array

	for (int i = 0; i < size; i++) {
		int grade;
		do {
			cout << "Please enter grade " << (i + 1) << ": " << endl;
			cin >> grade;

			// make sure grade isnt too high or low
			if (grade > 100) {
				cout << "Grade is too high" << endl;
			} else if (grade < 0) {
				cout << "Grade is too low please try again." << endl;
			}

		} while (grade > 100 || grade < 0);  // keep asking if wrong

		grades[i] = grade;
	}

	// add everything up
	int total = 0;
	for (int i = 0; i < size; i++) {
		total += grades[i];
	}
	int average = total / size;  // probably should be double but idk

	cout << "\nGrade report" << endl;
	cout << "============================================" << endl;
	for (int i = 0; i < size; i++) {
		cout << "Grade " << (i + 1) << ": " << grades[i] << endl;
	}
	cout << "\n                        Average: " << average << endl;

	delete[] grades;  // free memory

	return 0;
}