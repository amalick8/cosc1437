#include <iostream>
using namespace std;

int main() {
	int size = 10;
	int* grades = new int[size];

	for (int i = 0; i < size; i++) {
		int grade;
		do {
			cout << "Please enter grade " << (i + 1) << ": " << endl;
			cin >> grade;

			if (grade > 100) {
				cout << "Grade is too high" << endl;
			} else if (grade < 0) {
				cout << "Grade is too low please try again." << endl;
			}
		} while (grade > 100 || grade < 0);

		grades[i] = grade;
	}

	int total = 0;
	for (int i = 0; i < size; i++) {
		total += grades[i];
	}
	int average = total / size;

	cout << "\nGrade report" << endl;
	cout << "============================================" << endl;
	for (int i = 0; i < size; i++) {
		cout << "Grade " << (i + 1) << ": " << grades[i] << endl;
	}
	cout << "\n       Your Average is: " << average << endl;
	return 0; //end
}