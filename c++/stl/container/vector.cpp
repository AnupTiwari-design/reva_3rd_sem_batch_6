#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Create a vector with 10 elements, each initialized to 100
    vector<int> v(10, 100);

    // Add elements using push_back
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "Initial Vector: ";
    for (int i : v)
        cout << i << " ";
    cout << endl;

    // Insert element at the beginning
    v.insert(v.begin(), 5);
    cout << "After inserting 5 at beginning: ";
    for (int i : v)
        cout << i << " ";
    cout << endl;

    // Remove last element
    v.pop_back();
    cout << "After pop_back (remove last element): ";
    for (int i : v)
        cout << i << " ";
    cout << endl;

    // Remove first element
    v.erase(v.begin());
    cout << "After erase (remove first element): ";
    for (int i : v)
        cout << i << " ";
    cout << endl;

    // Sort in ascending order
    sort(v.begin(), v.end());
    cout << "After sorting (ascending): ";
    for (int i : v)
        cout << i << " ";
    cout << endl;

    // Sort in descending order
    sort(v.rbegin(), v.rend());
    cout << "After sorting (descending): ";
    for (int i : v)
        cout << i << " ";
    cout << endl;

    // Reverse the vector
    reverse(v.begin(), v.end());
    cout << "After reversing the vector: ";
    for (int i : v)
        cout << i << " ";
    cout << endl;

    // Clear all elements
    v.clear();
    cout << "After clear(): Vector size = " << v.size() << endl;

    if (v.empty())
        cout << "Vector is now empty ✅" << endl;
    else
        cout << "Vector still has elements ❌" << endl;

    return 0;
}