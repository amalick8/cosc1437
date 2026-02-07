#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; 
}

int main() {
    int myNumbers[3] = {1, 2, 3};

    printArray(myNumbers, 3);

    return 0;
}
