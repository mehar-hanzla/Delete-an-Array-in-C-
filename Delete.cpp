#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int position;

    cout << "Enter the number to delete it (1-5): ";
    cin >> position;

    if (position < 1 || position > 5) {
        cout << "Invalid position!" << endl;
        return 1;
    }

    position--; 
    for (int i = position; i < 4; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "Array after deletion: ";
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}