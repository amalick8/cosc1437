#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	//array list
	string productArray[10] = {"Bread", "Bagel", "Hotdog", "Chili", "Cheese", "Bacon", "Chips", "Cat food", "Advil", "Nail file"};
	//vector list
	vector<string> productVector = {"Cat toy", "Orange juice", "Tea", "Butter", "Lotion", "Eye wash", "Soap", "Benadryl", "Pizza", "Cream cheese"};

	// print them next to each other idk if setw is right here - come back ot this
	cout << left << setw(25) << "List using array" << "List using vector" << endl;
	for (int i = 0; i <= 10; i++) {   //goes thru both lists
		string arrItem = to_string(i + 1) + ". " + productArray[i];
		string vecItem = to_string(i + 1) + ". " + productVector[i];
		cout << left << setw(25) << arrItem << vecItem << endl;
	}
	return 0; //end it
}