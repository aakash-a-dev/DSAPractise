#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declaration and initialization
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Accessing elements
    cout << "First element: " << numbers[0] << endl;
    cout << "Second element: " << numbers.at(1) << endl;

    // Modifying elements
    numbers[2] = 10;

    // Adding elements
    numbers.push_back(6);

    // Size and capacity
    cout << "Size: " << numbers.size() << endl;
    cout << "Capacity: " << numbers.capacity() << endl;

    // Iterating over elements
    for (const auto& number : numbers) {
        cout << number << " ";
    }
    cout << endl;

    // Removing elements
    numbers.pop_back();
    numbers.erase(numbers.begin() + 1);

    // Checking if empty
    if (numbers.empty()) {
        cout << "Vector is empty." << endl;
    } else {
        cout << "Vector is not empty." << endl;
    }

    return 0;
}
