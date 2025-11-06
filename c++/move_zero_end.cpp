#include <iostream>
using namespace std;

void moveZeroes(int nums[], int n) {
    int count = 0; // counts number of zeros

    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            count++;
        } 
        else if (count > 0) {
            int t = nums[i];
            nums[i] = 0;
            nums[i - count] = t;
        }
    }
}

int main() {
    int nums[] = {0, 1, 0, 3, 12};
    int n = sizeof(nums) / sizeof(nums[0]);

    moveZeroes(nums, n);

    cout << "After moving zeroes: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}