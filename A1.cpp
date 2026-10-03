#include <iostream>
using namespace std;

int main() {
    double current_number;
    double largest;
    bool first_number = true;

    cout << "Enter a set of numbers to find the largest.\n";
    cout << "Enter any letter (e.g., 'q') to stop and see the result: \n";

    // Loop continues as long as a valid double is extracted from the input stream
    while (cin >> current_number) {
        if (first_number) {
            largest = current_number;
            first_number = false;
        } else if (current_number > largest) {
            largest = current_number;
        }
    }

    if (first_number) {
        cout << "No valid numbers were entered." << endl;
    } else {
        cout << "The largest number in the set is: " << largest << endl;
    }

    return 0;
}
