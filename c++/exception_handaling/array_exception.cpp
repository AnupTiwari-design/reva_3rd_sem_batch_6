#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter index (0–4): ";
    cin >> index;

    try {
        if (index < 0 || index >= 5)
            throw "Array index out of bounds!";

        cout << "Value: " << arr[index] << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    cout << "Program executed safely!" << endl;
    return 0;
}